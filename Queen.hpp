#ifndef Queen_hpp
#define Queen_hpp
#include <stdio.h>
#include "ChessPiece.hpp"

class Visitor;

class Queen : public ChessPiece
{
private:
    char q_X;
    char q_Y;
    char q_Color;
    char q;

public:
    Queen(char d_X, char d_Y, char d_Color, char d_Q);
    ~Queen();
    char getQueen_X();
    char getQueen_Y();
    void setQueen_X(char x);
    void setQueen_Y(char y);
    char getQueen_Color();
    virtual bool accept(Visitor *pV, char d_X, char d_Y);


};

#endif /* Queen_hpp */

