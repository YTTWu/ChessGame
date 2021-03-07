#ifndef Visitor_hpp
#define Visitor_hpp

#include <stdio.h>

class King;
class Queen;
class Rook;

class Visitor
{
public:

   virtual bool visitKing(King *king, int d_x, int d_y) = 0;
   //virtual bool visitQueen(Queen *queen, int d_x, int d_y) = 0;
   //virtual bool visitBishop(Bishop *bishop, int x, int y);
   //virtual bool visitKnight(Knight *knight, int x, int y);
   //virtual bool visitRook(Rook *rook, int d_x, int d_y) = 0;
   //virtual bool visitPawn(Pawn *pawn, int x, int y);
    
};

#endif /* Visitor_hpp */

