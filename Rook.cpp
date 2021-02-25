#include "Rook.hpp"

Rook::Rook(char d_X, char d_Y, char d_color)
{
    this->r_X = d_X;
    this->r_Y = d_Y;
    this->r_Color = d_color;
}
Rook::~Rook(){}
char Rook::getRook_X()
{
    return r_X;
}
char Rook::getRook_Y()
{
    return r_Y;
}
char Rook::setRook_X();
{
    this->r_X = x;
}
char Rook::setRook_Y();
{
    this->r_X = y;
}
char Rook::getRook_Color();
{
    return r_Color;
}
virtual bool Rook::accept(Visitor *pV, char d_X, char d_Y);
{
    if(pV->visitRook(this,d_X,d_Y))
    {
        return true;
    }
    return false;
}
 
