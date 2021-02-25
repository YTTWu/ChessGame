
#ifndef Knight_hpp
#define knight_hpp


#include "ChessPiece.hpp"
#include "visitor.hpp"
#include <stdio.h>


class Knight : public ChessPiece
{
    
private:
    char kn_X;
    char kn_Y;
    char color;
    char name;
    
public:
    Knight(char d_x, char d_y, char p_color);
    
    ~Knight();
    
    bool move(char d_hor, char d_ver);
    
    void setKnight_X(char x);
    void setKnight_Y(char y);
    
    char getKnight_X();
    char getKnight_Y();
    char getKnight_Color();
    
    bool accept(Visitor *pV);
    
    
    
};



#endif

