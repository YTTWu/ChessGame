#ifndef PieceVisitor_hpp
#define PieceVisitor_hpp

#include <stdio.h>
#include <math.h>
#include "visitor.hpp"



class PieceVisitor : public Visitor
{

public:
   
    
    bool visitKing(King *king, int d_x, int d_y)
    {

        int temp_x = king->get_X();
        int temp_y = king->get_Y();
        
        if (abs(d_x - temp_x == 1 && d_y == temp_y))
            {
            return true;
            }
       else if (abs(d_y - temp_y == 1 && d_x == temp_x))
            {
                return true;
            }
        else if(abs(d_x - temp_x)==(abs(d_y - temp_y) && (abs(d_x - temp_x)<=1) && (abs(d_y - temp_y)<=1)))
            {
            return true;
            }
            else return false;
    }
    
    //bool visitQueen(Queen *queen, int d_x, int d_y){}
     bool visitBishop(Bishop *bishop, int d_x, int d_y)
    {
            
            int temp_x = bishop->get_X();
            int temp_y = bishop->get_Y();
      
            if ((abs(d_x - temp_x ) == abs(d_y - temp_y)) && (abs(d_x - temp_x)<=7) && (abs(d_y - temp_y)<=7))
                {
                return true;
                }
                else return false;
    
    }
    // bool visitKnight(Knight *knight, int d_x, int d_y){}
    // bool visitRook(Rook *rook, int d_x, int d_y){}
    // bool visitPawn(Pawn *pawn, int d_x, int d_y){}
   
};





#endif /* PieceVisitor_hpp */

