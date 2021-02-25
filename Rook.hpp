#ifndef Rook_hpp
#define Rook_hpp
#include <stdio.h>
#include "ChessPiece.hpp"
#include "PieceVisitor.hpp"

class Rook : public ChessPiece
{
private:
    char r_X;
    char r_Y;
    char r_Color;
    char r;

public:
    Rook(char d_X, char d_Y, char d_Color);
    ~Rook();
    char getRook_X();
    char getRook_Y();
    char setRook_X();
    char setRook_Y();
    char getRook_Color();
    virtual bool accept(Visitor *pV, char d_X, char d_Y);


};


#endif /* Rook_hpp */
