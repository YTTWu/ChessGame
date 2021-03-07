#ifndef Visitor_hpp
#define Visitor_hpp


#include <stdio.h>

class Knight;
class Pawn;
class Bishop;



class Visitor
{
public:
    
    virtual bool visitKnight(Knight *knight, int d_x, int d_y) = 0;
    virtual bool visitBishop(Bishop *bishop, int d_x, int d_y) = 0;
    virtual bool visitPawn(Pawn *pawn, int d_x, int d_y) = 0;
    //virtual bool visitRook(Rook rook, int d_x, int d_y);
    //virtual bool visitQueen(Queen queen, int d_x, int d_y );
    //virtual bool visitKing(King king, int d_x, int d_y);
    
    
};


#endif


