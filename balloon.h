#ifndef BALLOON_H
#define BALLOON_H

#include "axis.h"


class Balloon
{
private:
    /* data */
    char sign = '0';
    short color;
    short timeLive;
public:
    Axis Position;
    short Size;
    Balloon(/* args */);
    ~Balloon();
    void SetColor(short color);
    void SetTimeLive(short timeLive);
    char GetSign();
};

#endif

