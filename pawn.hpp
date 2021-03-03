

#ifndef Pawn_hpp
#define Pawn_hpp

#include <stdio.h>
#include "ChessPiece.hpp"
#include "visitor.hpp"

class Pawn : public ChessPiece
{   
public:
    Pawn(int x, int y, char color, char name);
    bool accept(Visitor *vP, char d_x, char d_y);
    
};

#endif 

