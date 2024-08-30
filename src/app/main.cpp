#include <QCoreApplication>
#include <QDir>
#include <QPluginLoader>
#include <QTimer>
#include <QDebug>

#include "senderinterface.h"
#include "receiverinterface.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // brute force load our test plugins
    QDir pluginsDir =  QDir(QCoreApplication::applicationDirPath());
    pluginsDir.cd("../plugins");
    QPluginLoader *senderPlugin = new QPluginLoader(pluginsDir.absoluteFilePath("libbasicsender.so"), qApp);
    bool loaded = senderPlugin->load();
    QPluginLoader *receiverPlugin = new QPluginLoader(pluginsDir.absoluteFilePath("libbasicreceiver.so"), qApp);
    loaded = loaded && receiverPlugin->load();
    Q_ASSERT(loaded);

    SenderInterface *sender = qobject_cast<SenderInterface*>(senderPlugin->instance());
    ReceiverInterface *receiver = qobject_cast<ReceiverInterface*>(receiverPlugin->instance());
    Q_ASSERT(sender);
    Q_ASSERT(receiver);

    QObject::connect(sender, &SenderInterface::tick, receiver, &ReceiverInterface::tock);
    sender->start();

    QTimer::singleShot(15000, &a, &QCoreApplication::quit);

    return a.exec();
}
