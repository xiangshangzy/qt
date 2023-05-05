#include <qobject>
#include <qdebug>
#include <qstring>
#include <qqml.h>
class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    QML_ELEMENT
public:
    Q_INVOKABLE QString handleMessage(const QString &msg)
    {
        qDebug() << msg;
        return "handle:" + msg;
    }
    explicit Message(QObject *parent = nullptr);

    QString name();
    void setName(const QString &name);

signals:
    void nameChanged();

private:
    QString name_;
};