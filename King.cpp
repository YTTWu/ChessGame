#include "King.hpp"
#include "Visitor.hpp"

King::King(char d_X, char d_Y, char d_color, char d_K)
{
    this->k_X = d_X;
    this->k_Y = d_Y;
    this->k_Color = d_color;
    this->k = d_K;
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
void King::setKing_X(char x)
{
    this->k_X = x;
}
void King::setKing_Y(char y)
{
    this->k_X = y;
}
char King::getKing_Color()
{
    return k_Color;
}
 bool King::accept(Visitor *pV, char d_X, char d_Y)
{
    if(pV->visitKing(this,d_X,d_Y))
    {
        return true;
    }
    return false;
}

