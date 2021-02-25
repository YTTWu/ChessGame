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
    bool visitKing(King king, char x, char y){}
    bool visitQueen(Queen queen, char x, char y){}
    bool visitBishop(Bishop bishop, char x, char y){}
    bool visitKnight(Knight knight, char x, char y){}
    bool visitRook(Rook rook, char x, char y){}
    bool visitPawn(Pawn pawn, char x, char y){}
    
};

#endif /* Visitor_hpp */

