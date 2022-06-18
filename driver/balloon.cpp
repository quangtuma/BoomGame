#include "D:/C++/Projects/BoomGame/include/balloon.h"


Balloon::Balloon(/* args */)
{
    color = 0; 
    timeLive = 1;
    Size = 1;
    Position = Axis(0, 0);
}

Balloon::~Balloon()
{
}

void Balloon::SetColor(short color)
{
    this->color = color;
}

void Balloon::SetTimeLive(short timeLive)
{
    this->timeLive = timeLive;
}

char Balloon::GetSign()
{
    return sign;
}