
#ifndef PieceVisitor_hpp
#define PieceVisitor_hpp




#include "visitor.hpp"

class PieceVisitor : public Visitor
{
    
public:
    
    PieceVisitor();
    
    
    bool visitKnight(Knight *knight, char d_x, char d_y)
    {
        
    }
     
    bool visitBishop(Bishop *bishop, char d_x, char d_y)
    {
        
    }
     
    bool visitPawn(Pawn *pawn, char d_x, char d_y)
    {
        int temp_x = pawn->getPawn_X();
        int temp_y = pawn->getPawn_Y();
        
        if(pawn->getPawn_isMoved() == true)
        {
            if(d_x == temp_x && d_y - temp_y == 1)
            {
                return true;
            }
            if(d_x - temp_x == -1 && d_y - temp_y == 1)
            {
                return true;
            }
            if(d_x - temp_x == 1 && d_y - temp_y == 1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(d_x == temp_x && d_y - temp_y == 1)
            {
                return true;
            }
            else if(d_x == temp_x && d_y - temp_y == 2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    }
    
    bool visitRook(Rook *rook, char d_x, char d_y)
    {
        int temp_x = rook->getRook_X();
        int temp_y = rook->getRook_Y();
        int temp;
        
        if(d_x == temp_x)
        {
            temp = d_y - temp_y;
            if(-7 <= temp && temp <= 7)
            {
                return true;
            }
            
            return false;
        }
        if(d_y == temp_y)
        {
            temp = d_x - temp_x;
            
            if(-7 <= temp && temp <= 7)
            {
                return true;
            }
            
            return false;
        }
    }
    
    
    bool visitQueen(Queen queen, char d_x, char d_y )
    {
        
    }
     
    
    bool visitKing(King king, char d_x, char d_y)
    {
        
    }
     
     
};



#endif 


