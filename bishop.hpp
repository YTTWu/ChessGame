
#ifndef Bishop_hpp
#define Bishop_hpp

#include <stdio.h>

#include "ChessPiece.hpp"

class Bishop : public ChessPiece
{
private:
    char b_X;
    char b_Y;
    char color;
    char name;
public:
    Bishop(char x, char y, char p_color);
    ~Bishop();
    bool move(char d_x, char  d_y);
    
    void setBishop_X(char x);
    void setBishop_Y(char y);
    
    char getBishop_X();
    char getBishop_Y();
    char getBishop_Color();
    
    bool accept(Visitor *pV, char d_x, char d_y);
};

#endif /* Bishop_hpp */

