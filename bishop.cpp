
#include "Bishop.hpp"
#include "PieceVisitor.hpp"

bool Bishop::accept(Visitor *pV, char d_x, char d_y)
{
    if(pV->visitBishop(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




