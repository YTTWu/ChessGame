#include "Queen.hpp"

Queen::Queen(char d_X, char d_Y, char d_color)
{
    this->q_X = d_X;
    this->q_Y = d_Y;
    this->q_Color = d_color;
}
Queen::~Queen(){}
char Queen::getQueen_X()
{
    return d_X;
}
char Queen::getQueen_Y()
{
    return d_Y;
}
char Queen::setQueen_X()
{
    this->q_X = x;
}
char Queen::setQueen_Y()
{
    this->q_Y = y;
}
char Queen::getQueen_Color()
{
    return q_Color;
}
virtual bool Queen::accept(Visitor *pV, char d_X, char d_Y)
{
    if(pV->visitQueen(this,d_X,d_Y))
    {
        return true;
    }
    return false;
}

