

#include "Knight.hpp"
#include "visitor.hpp"

Knight::Knight(int x, int y, char color, char name)
{
    set_X(x);
    set_Y(y);
    set_color(color);
    set_name(name);
}
    


bool Knight::accept(Visitor *pV, char d_x, char d_y)
{
    bool Knight::accept(Visitor *pV, int d_x, int d_y)
    {
    
        if(pV->visitKnight(this, d_x, d_y))
        {
            return true;
        }
        return false;
    }
}




