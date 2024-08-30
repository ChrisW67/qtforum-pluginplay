#ifndef BASICSENDER_H
#define BASICSENDER_H

#include <QObject>
#include "plugin_global.h"
#include "senderinterface.h"

class PLUGIN_EXPORT BasicSender: public SenderInterface {
    Q_OBJECT
    Q_PLUGIN_METADATA(IID SenderInterface_iid FILE "basicsender.json")
    Q_INTERFACES(SenderInterface)

public:
    explicit BasicSender(QObject *parent = nullptr);

    virtual void start() override;
};

#endif // BASICSENDER_H
