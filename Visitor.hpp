#ifndef Visitor_hpp
#define Visitor_hpp

#include <stdio.h>
#include <iostream>
#include "ChessPiece.hpp"
#include "King.hpp"
#include "Queen.hpp"
#include "Bishop.hpp"
#include "Knight.hpp"
#include "Rook.hpp"
#include "Pawn.hpp"

class Visitor
{
    bool visitKing(King *king, int x, int y);
    bool visitQueen(Queen *queen, int x, int y);
    bool visitBishop(Bishop *bishop, int x, int y);
    bool visitKnight(Knight *knight, int x, int y);
    bool visitRook(Rook *rook, int x, int y);
    bool visitPawn(Pawn *pawn, int x, int y);
    
};

#endif /* Visitor_hpp */

