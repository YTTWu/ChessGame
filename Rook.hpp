#ifndef Rook_hpp
#define Rook_hpp
#include <stdio.h>
#include "ChessPiece.hpp"

class Visitor;

class Rook : public ChessPiece
{
public:
   Rook(int x, int y, char color, char name); 
   bool accept(Visitor *pV, char d_x, char d_y);


};


#endif /* Rook_hpp */
