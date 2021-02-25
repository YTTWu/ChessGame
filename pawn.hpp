

#ifndef Pawn_hpp
#define Pawn_hpp

#include <stdio.h>
#include "ChessPiece.hpp"

class Pawn : public ChessPiece
{
private:
    char p_X;
    char p_Y;
    char color;
    bool isMoved;
    char name;
    
public:
    Pawn(char x, char y, char color);
    ~Pawn();
    
    bool move(char d_hor, char d_ver);
    
    void setPawn_X(char x);
    void setPawn_Y(char y);
    
    char getPawn_X();
    char getPawn_Y();
    char getPawn_Color();
    bool getPawn_isMoved();
    
    bool accept(Visitor *vP, char d_x, char d_y);
    
};

#endif 

