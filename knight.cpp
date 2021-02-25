

#include "Knight.hpp"

Knight::Knight(char d_x, char d_y, char p_color) : kn_X(d_x), kn_Y(d_y), color(p_color)
{
    this->name = 'K';
}

Knight::~Knight(){}

void Knight::setKnight_X(char x)
{
    this->kn_X = x;
}

void Knight::setKnight_Y(char y)
{
    this->kn_Y = y;
}


char Knight::getKnight_X()
{
    return kn_X;
}

char Knight::getKnight_Y()
{
    return kn_Y;
}

char Knight::getKnight_Color()
{
    return color;
}

bool Knight::accept(Visitor *pV, char d_x, char d_y)
{
    
    if(pV->visitKnight(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




