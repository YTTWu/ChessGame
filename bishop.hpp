
#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>

#include "chessPiece.hpp"

class Bishop : public ChessPiece
{
public:
    Bishop(int x, int y, char color, char name);    
    bool accept(Visitor *pV, char d_x, char d_y);
};

#endif /* Bishop_hpp */

