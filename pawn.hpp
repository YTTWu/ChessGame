

#ifndef Pawn_hpp
#define Pawn_hpp

#include <stdio.h>
#include "ChessPiece.hpp"

class Pawn : public ChessPiece
{   
public:
    bool accept(Visitor *vP, char d_x, char d_y);
    
};

#endif 

