#ifndef King_hpp
#define King_hpp
#include <stdio.h>
#include "ChessPiece.hpp"

class Visitor;

class King : public ChessPiece
{
private:
    char k_X;
    char k_Y;
    char k_Color;
    char k;

public:
    King(char d_X, char d_Y, char d_Color, char d_K);
    ~King();
    char getKing_X();
    char getKing_Y();
    void setKing_X(char x);
    void setKing_Y(char y);
    char getKing_Color();
    virtual bool accept(Visitor *pV, char d_X, char d_Y);


};
#endif /* King_hpp */
