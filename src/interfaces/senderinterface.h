#ifndef SENDERINTERFACE_H
#define SENDERINTERFACE_H

#include <QObject>

class SenderInterface : public QObject
{
    Q_OBJECT
public:
    explicit SenderInterface(QObject *parent = nullptr);
    virtual ~SenderInterface() = default;

    virtual void start() = 0;

signals:
    void tick();
};

#define SenderInterface_iid "com.example.SenderInterface/1.0"
Q_DECLARE_INTERFACE(SenderInterface, SenderInterface_iid)


#endif // SENDERINTERFACE_H
