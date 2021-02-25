#include "King.hpp"

King::King(char d_X, char d_Y, char d_color)
{
    this->k_X = d_X;
    this->k_Y = d_Y;
    this->k_Color = d_color;
}
King::~King(){}
char King::getKing_X()
{
    return k_X;
}
char King::getKing_Y()
{
    return k_Y;
}
char King::setKing_X()
{
    this->k_X = x;
}
char King::setKing_Y()
{
    this->k_X = y;
}
char King::getKing_Color()
{
    return k_Color;
}
virtual bool King::accept(Visitor *pV, char d_X, char d_Y)
{
    if(pV->visitKing(this,d_X,d_Y))
    {
        return true;
    }
    return false;
}

