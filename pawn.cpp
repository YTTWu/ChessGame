

#include "Pawn.hpp"
#include "visitor.hpp"

Pawn::Pawn(int x, int y, char color, char name)
{
    set_X(x);
    set_Y(y);
    set_color(color);
    set_name(name);
}



bool Pawn::accept(Visitor *pV, char d_x, char d_y)
{
    if(pV->visitPawn(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




