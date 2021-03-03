
#ifndef Knight_hpp
#define knight_hpp


#include "ChessPiece.hpp"
#include "visitor.hpp"
#include <stdio.h>


class Knight : public ChessPiece
{
    
private:
    int kn_X;
    int  kn_Y;
    char color;
    char name;
    
public:
    Knight(int d_x, int d_y, char p_color);
    
    ~Knight();
    
    bool move(char d_hor, char d_ver);
    
    void setKnight_X(int x);
    void setKnight_Y(int y);
    
    char get_X();
    char get_Y();
    char get_Color();
    
    bool accept(Visitor *pV);
    
    
    
};



#endif

