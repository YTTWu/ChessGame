#ifndef Queen_hpp
#define Queen_hpp
#include <stdio.h>
#include "ChessPiece.hpp"
#include "Visitor.hpp"


class Queen : public ChessPiece
{
private:
    char q_X;
    char q_Y;
    char q_Color;
    char q;

public:
    Queen(char d_X, char d_Y, char d_Color);
    ~Queen();
    char getQueen_X();
    char getQueen_Y();
    char setQueen_X();
    char setQueen_Y();
    char getQueen_Color();
    virtual bool accept(Visitor *pV, char d_X, char d_Y);


};

#endif /* Queen_hpp */

