
#ifndef Knight_hpp
#define knight_hpp


#include "ChessPiece.hpp"
#include "visitor.hpp"
#include <stdio.h>


class Knight : public ChessPiece
{   
public:
    Knight(int x_, int y_, char color, char name);
    bool accept(Visitor *pV);
    
    
    
};



#endif

