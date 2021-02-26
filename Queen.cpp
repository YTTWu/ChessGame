#include "Queen.hpp"
#include "Visitor.hpp"

Queen::Queen(char d_X, char d_Y, char d_color, char d_Q)
{
    this->q_X = d_X;
    this->q_Y = d_Y;
    this->q_Color = d_color;
    this->q = d_Q;
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
void Queen::setQueen_X(char x)
{
    this->q_X = x;
}
void Queen::setQueen_Y(char y)
{
    this->q_Y = y;
}
char Queen::getQueen_Color()
{
    return q_Color;
}
bool Queen::accept(Visitor *pV, char d_X, char d_Y)
{
    if(pV->visitQueen(this,d_X,d_Y))
    {
        return true;
    }
    return false;
}

