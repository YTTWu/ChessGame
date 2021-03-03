#ifndef Queen_hpp
#define Queen_hpp
#include <stdio.h>
#include "ChessPiece.hpp"

class Visitor;

class Queen : public ChessPiece
{

public:
     Queen(int x, int y, char color, char name);
     bool accept(Visitor *pV);
};

#endif /* Queen_hpp */

