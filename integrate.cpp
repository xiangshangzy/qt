#include "Integrate.h"
Message::Message(QObject *parent) :
    QObject(parent)
{
}

QString Message::name()
{
    return name_;
}

void Message::setName(const QString &name)
{
    name_=name;
    emit nameChanged();
}