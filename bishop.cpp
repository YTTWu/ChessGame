
#include "Bishop.hpp"
#include "PieceVisitor.hpp"
Bishop::Bishop(char d_x, char d_y, char p_color) : b_X(d_x), b_Y(d_y), color(p_color)
{
    this->name = 'B';
}

Bishop::~Bishop(){}

void Bishop::setBishop_X(char x)
{
    this->b_X = x;
}

void Bishop::setBishop_Y(char y)
{
    this->b_Y = y;
}


char Bishop::getBishop_X()
{
    return b_X;
}

char Bishop::getBishop_Y()
{
    return b_Y;
}

char Bishop::getBishop_Color()
{
    return color;
}

bool Bishop::accept(Visitor *pV, char d_x, char d_y)
{
    if(pV->visitBishop(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




