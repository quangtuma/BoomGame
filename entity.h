#ifndef ENTITY_H
#define ENTITY_H

#include "axis.h"

class Entity
{
private:
    /* data */
    short color;
    short speed;
    short maxBalloons;
    short restBalloons;
    short sizeBalloon;
public:
    Axis Position;
    bool isUndying = false;
    Entity(/* args */);
    ~Entity();
    void SetColor(short);
    void SetSpeed(short);
    void SetMaxBalloons(short);
    void SetRestBalloons(short);
    void SetSizeBalloon(short);
    short GetSizeBalloon();
};
#endif

