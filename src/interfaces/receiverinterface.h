#ifndef RECEIVERINTERFACE_H
#define RECEIVERINTERFACE_H

#include <QObject>

class ReceiverInterface : public QObject
{
    Q_OBJECT
public:
    explicit ReceiverInterface(QObject *parent = nullptr);
    virtual ~ReceiverInterface() = default;

public slots:
    virtual void tock() = 0;

};


#define ReceiverInterface_iid "com.example.ReceiverInterface/1.0"
Q_DECLARE_INTERFACE(ReceiverInterface, ReceiverInterface_iid)

#endif // RECEIVERINTERFACE_H
