#ifndef Rook_hpp
#define Rook_hpp
#include <stdio.h>
#include "ChessPiece.hpp"

class Visitor;

class Rook : public ChessPiece
{
private:
    char r_X;
    char r_Y;
    char r_Color;
    char r;

public:
    Rook(char d_X, char d_Y, char d_Color, char d_R);
    ~Rook();
    char getRook_X();
    char getRook_Y();
    void setRook_X(char x);
    void setRook_Y(char y);
    char getRook_Color();
    virtual bool accept(Visitor *pV, char d_X, char d_Y);


};


#endif /* Rook_hpp */
