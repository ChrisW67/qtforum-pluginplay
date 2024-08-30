#ifndef BASICSENDER_H
#define BASICSENDER_H

#include <QObject>
#include "../interfacelib/senderinterface.h"

class BasicSender: public SenderInterface {
    Q_OBJECT
public:
    explicit BasicSender(QObject *parent = nullptr);

    virtual void start() override;
};

#endif // BASICSENDER_H
