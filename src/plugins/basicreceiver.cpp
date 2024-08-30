#include "basicreceiver.h"

#include <QDebug>


BasicReceiver::BasicReceiver(QObject *parent)
    : ReceiverInterface{parent}
{}

void BasicReceiver::tock()
{
    qDebug() << Q_FUNC_INFO << "Tick received....tock";
}
