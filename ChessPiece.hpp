#ifndef ChessPiece_hpp
#define ChessPiece_hpp

#include <stdio.h>
#include "Visitor.hpp"
#include "PieceVisitor.hpp"

class ChessPiece 
{

public:
    virtual bool move(char x, char y) = 0;
    virtual bool accept(Visitor *pV);
    virtual bool setMove(Movement *new_piece);
    void print();
   
};
    
#endif /* ChessPiece_hpp */
