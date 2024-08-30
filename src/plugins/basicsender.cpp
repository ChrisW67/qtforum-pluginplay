#include "basicsender.h"

#include <QTimer>

BasicSender::BasicSender(QObject *parent)
    : SenderInterface{parent}
{}

void BasicSender::start() {
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &BasicSender::tick);
    timer->start(2000);
}
