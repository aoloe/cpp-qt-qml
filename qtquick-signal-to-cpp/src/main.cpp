#include <QApplication>
#include <QQmlApplicationEngine>

#include "backend.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QObject* rootObject = engine.rootObjects().first();

    auto qmlClickable = rootObject->findChild<QObject*>("clickable");

    Backend backend{};

    QObject::connect(qmlClickable, SIGNAL(qmlSignal(QString)),
         &backend, SLOT(onClicked(QString)));

    // The new signal/slot syntax cannot work
    // QObject::connect(qmlClickable, &QObject::qmlSignal,
    //     [](const QString& text) {qDebug() << text;});

    return app.exec();
}
