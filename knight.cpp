

#include "Knight.hpp"

bool Knight::accept(Visitor *pV, char d_x, char d_y)
{
    
    if(pV->visitKnight(this, d_x, d_y))
    {
        return true;
    }
    return false;
}




