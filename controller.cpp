#include "controller.h"

void Controller::updatePos()
{
    bool isUp = true;
        while(true)
        {

            if(isUp)
            {
                ++y;
            }
            else
            {
                --y;
            }
            if (isUp && (y > 500))
            {
                isUp = false;
            }
            else if(!isUp && (y < 1))
            {
                isUp = true;
            }
        }
}

Controller::Controller(QObject *parent) : QObject(parent)
{

}

unsigned Controller::getX()
{
    return x;
}

unsigned Controller::getY()
{
    return y;
}
