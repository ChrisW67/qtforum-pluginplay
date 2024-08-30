#ifndef BASICRECEIVER_H
#define BASICRECEIVER_H

#include <QObject>
#include "plugin_global.h"
#include "receiverinterface.h"

class PLUGIN_EXPORT BasicReceiver : public ReceiverInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID ReceiverInterface_iid FILE "basicreceiver.json")
    Q_INTERFACES(ReceiverInterface)

public:
    explicit BasicReceiver(QObject *parent = nullptr);

    void tock() override;
};

#endif // BASICRECEIVER_H
