
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
            if(d_x == temp_x && abs(d_y - temp_y) == 1)
            {
                return true;
            }
            if(d_x - temp_x == -1 && abs(d_y - temp_y) == 1)
            {
                return true;
            }
            if(d_x - temp_x == 1 && abs(d_y - temp_y) == 1)
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
            if(d_x == temp_x && abs(d_y - temp_y) == 1)
            {
                return true;
            }
            else if(d_x == temp_x && abs(d_y - temp_y) == 2)
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
        int temp_x = queen->getQueen_X();
        int temp_y = queen->getQueen_Y();
        int xIncrement;
        int yIncrement;
       if((temp_x != d_x || temp_y != d_y) ){ // if not going side to side or up(diagonal)*/
            if(temp_x = d_x  && (abs(d_y - temp_y)<=7)){   // going up or down
                return true;
            }
            if(temp_y = d_y  && (abs(d_x - temp_x)<=7)){ // side
                return true;
            }  
        } 
        else if ((abs(d_x - temp_x )== abs(d_y - temp_y) && (abs(d_x - temp_x)<=7) && (abs(d_y - temp_y)<=7)){ //diagonal
                return true;
            }
        else {return false;}
    }
     
    
    bool visitKing(King king, char d_x, char d_y)
    {
     	if (abs(d_x - king->getX()) == 1)
		if (abs(thatSpace->getY() - king->getY()) == 1)
		{
			thatSpace->setSpace(thisKing);
			thisKing->setEmpty();
			return true;
		}
		else return false;
	else return false;
    }   
    }
     
     
};



#endif 


