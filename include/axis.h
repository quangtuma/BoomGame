#ifndef AXIS_H
#define AXIS_H

class Axis
{
private:
    /* data */
public:
    short X;
    short Y;
    Axis();
    Axis(short x, short y);
    ~Axis();
    void setAxis(short x, short y);
};
#endif
