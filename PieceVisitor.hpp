#ifndef PieceVisitor_hpp
#define PieceVisitor_hpp

#include <stdio.h>
#include <iostream>
#include "Visitor.hpp"



class PieceVisitor : public Visitor
{

public:
    PieceVisitor();
    
    bool visitKing(King *king, char d_x, char d_y)
    {

          
        
        
        
        
        
    }
    bool visitQueen(Queen *queen, char d_x, char d_y){}
    bool visitBishop(Bishop *bishop, char d_x, char d_y)
    {
        
    }
    bool visitKnight(Knight *knight, char d_x, char d_y){}
    bool visitRook(Rook *rook, char d_x, char d_y){}
    bool visitPawn(Pawn *pawn, char d_x, char d_y){}
    
};





#endif /* PieceVisitor_hpp */
