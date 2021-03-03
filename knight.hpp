
#ifndef Knight_hpp
#define knight_hpp


#include "ChessPiece.hpp"
#include "visitor.hpp"
#include <stdio.h>


class Knight : public ChessPiece
{   
public:
    bool accept(Visitor *pV);
    
    
    
};



#endif

