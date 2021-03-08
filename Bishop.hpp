#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>
#include "ChessPiece.hpp"
#include "Visitor.hpp"

class Visitor;

class Bishop : public ChessPiece
{
public:
    Bishop(int x, int y, char color, char name);    
    bool accept(Visitor *pV, int d_x, int d_y);
};

#endif /* Bishop_hpp */
