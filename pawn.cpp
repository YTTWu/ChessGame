

#include "Pawn.hpp"
#include "PieceVisitor.hpp"

bool Pawn::accept(Visitor *pV, char d_x, char d_y)
{
    if(pV->visitPawn(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




