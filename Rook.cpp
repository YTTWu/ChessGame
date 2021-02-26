#include "Rook.hpp"
#include "Visitor.hpp"

Rook::Rook(char d_X, char d_Y, char d_color, char d_R)
{
    this->r_X = d_X;
    this->r_Y = d_Y;
    this->r_Color = d_color;
    this->r = d_R;
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
void Rook::setRook_X(char x);
{
    this->r_X = x;
}
void Rook::setRook_Y(char y);
{
    this->r_Y = y;
}
char Rook::getRook_Color();
{
    return r_Color;
}
bool Rook::accept(Visitor *pV, char d_X, char d_Y);
{
    if(pV->visitRook(this,d_X,d_Y))
    {
        return true;
    }
    return false;
}
 
