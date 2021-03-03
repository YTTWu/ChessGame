#ifndef King_hpp
#define King_hpp
#include <stdio.h>
#include "ChessPiece.hpp"

class Visitor;

class King : public ChessPiece
{

public:
    King(int x, int y, char color, char name);
    bool accept(Visitor *pV, char d_x, char d_y);


};
#endif /* King_hpp */
