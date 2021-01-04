#include <QObject>
#include <QDebug>

class Backend : public QObject
{
    Q_OBJECT
    public:
        Backend(QObject *parent = 0) : QObject(parent) {}

    public slots:
        void onClicked(const QString& message) {qDebug() << message << "clicked";}
};
