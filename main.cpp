#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QThread>
#include "controller.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QScopedPointer<Controller> controller(new Controller);

   // Controller *controller = new Controller();
    QThread* thread = new QThread();
    controller->moveToThread(thread);
    //controller->updatePos();
    thread->start();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("controller", controller.data());
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
