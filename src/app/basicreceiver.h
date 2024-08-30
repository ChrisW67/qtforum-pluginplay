#ifndef BASICRECEIVER_H
#define BASICRECEIVER_H

#include <QObject>
#include "../interfacelib/receiverinterface.h"

class BasicReceiver : public ReceiverInterface
{
    Q_OBJECT
public:
    explicit BasicReceiver(QObject *parent = nullptr);

    void tock() override;
};

#endif // BASICRECEIVER_H
