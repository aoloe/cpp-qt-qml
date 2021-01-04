#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "backend.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    Backend backend{};

    QObject* rootObject = engine.rootObjects().first();
    qDebug() << rootObject;
    engine.rootContext()->setContextProperty("backend", &backend);


    return app.exec();
}

