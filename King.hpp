#ifndef King_hpp
#define King_hpp
#include <stdio.h>
#include "ChessPiece.hpp"
#include "Visitor.hpp"

class King : public ChessPiece
{
private:
    char k_X;
    char k_Y;
    char k_Color;
    char k;

public:
    King(char d_X, char d_Y, char d_Color);
    ~King();
    char getKing_X();
    char getKing_Y();
    char setKing_X();
    char setKing_Y();
    char getKing_Color();
    virtual bool accept(Visitor *pV, char d_X, char d_Y);


};
#endif /* King_hpp */
