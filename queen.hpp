#ifndef Queen_hpp
#define Queen_hpp
#include <stdio.h>
#include "chessPiece.hpp"

class Visitor;

class Queen : public ChessPiece
{

public:
     Queen(int x, int y, char color, char name);
     bool accept(Visitor *pV, int d_x, int d_y);
};

#endif /* Queen_hpp */

