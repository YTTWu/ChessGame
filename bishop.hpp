
#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>

#include "ChessPiece.hpp"

class Bishop : public ChessPiece
{
public:    
    bool accept(Visitor *pV, char d_x, char d_y);
};

#endif /* Bishop_hpp */

