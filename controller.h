#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QPoint>

class Controller : public QObject
{
    Q_OBJECT
    unsigned x=455;
    unsigned y=33;

public:
    explicit Controller(QObject *parent = nullptr);
    Q_INVOKABLE unsigned getX();
    Q_INVOKABLE unsigned getY();
    void updatePos();
signals:

public slots:
};

#endif // CONTROLLER_H
