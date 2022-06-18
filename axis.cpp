#include "axis.h"

Axis::Axis(/* args */)
{
    X = Y = 0;
}

Axis::Axis(short x, short y)
{
    X = x; Y = y;
}

Axis::~Axis()
{ 
}

void Axis::setAxis(short x, short y)
{
    X = x; Y = y;
}