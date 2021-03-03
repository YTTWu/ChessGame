#ifndef Visitor_hpp
#define Visitor_hpp


#include <stdio.h>
#include "Knight.hpp"
#include "Bishop.hpp"
#include "Pawn.hpp"
#include "Rook.hpp"
#include "Queen.hpp"
#include "King.hpp"





class Visitor
{
public:
    
    virtual bool visitKnight(Knight *knight, char d_x, char d_y);
    virtual bool visitBishop(Bishop *bishop, char d_x, char d_y);
    virtual bool visitPawn(Pawn *pawn, char d_x, char d_y);
    virtual bool visitRook(Rook rook, char d_x, char d_y);
    virtual bool visitQueen(Queen queen, char d_x, char d_y );
    virtual bool visitKing(King king, char d_x, char d_y);
    
    
};


#endif


