#include "D:/C++/Projects/BoomGame/include/entity.h"

Entity::Entity(/* args */)
{
    color = 0;
    speed = maxBalloons = restBalloons = sizeBalloon = 1;
}

Entity::~Entity()
{
}
void Entity::SetColor(short color)
{
    this->color = color;
}

void Entity::SetMaxBalloons(short max)
{
    this->maxBalloons = max;
}

void Entity::SetRestBalloons(short rest)
{
    this->restBalloons = rest;
}

void Entity::SetSizeBalloon(short size)
{
    this->sizeBalloon = size;
}

short Entity::GetSizeBalloon()
{
    return this->sizeBalloon;
}