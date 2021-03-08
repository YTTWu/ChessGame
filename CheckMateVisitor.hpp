#ifndef CheckMateVisitor_hpp
#define CheckMateVisitor_hpp

#include <stdio.h>
#include <math.h>
#include "Visitor.hpp"

class CheckMateVisitor : public Visitor
{

public:
   
    
    bool visitKing(King *king, int d_x, int d_y)
    {

        int temp_x = king->get_X();
        int temp_y = king->get_Y();
       

	while(temp_y < 7)
	{
	  if(temp_x == d_x && temp_y -1 == d_y)
		{
		return true;
		}
	  temp_y += 1;
	}

	
	
       /* if (abs(d_x - temp_x == 1 && d_y == temp_y))
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
   */

	 }
    
//bool visitQueen(Queen *queen, int d_x, int d_y){}

     bool visitBishop(Bishop *bishop, int d_x, int d_y)
    {
            
          int temp_x = bishop->get_X();
          int temp_y = bishop->get_Y();
    
         if (bishop->getColor() == 'w')
	   {
	    while(temp_x < 7 && temp_y < 7)
	      {

 	      if(temp_x + 1 == d_x && temp_y - 1 == d_y || temp_x - 1 == d_x && temp_y - 1 == d_y)
		{
		 return true;
		}
		temp_y += 1;
                }
	    }

	 if (bishop->getColor() == 'W')
           {   
	    while(temp_x < 7 && temp_y < 7)
	      {
	       if(temp_x - 1 == d_x && temp_y + 1 == d_y || temp_x + 1 == d_x && temp_y + 1 == d_y)
          	{
                 return true;
                }
		temp_x +=1;
	       }

    	    }
  }
// bool visitKnight(Knight *knight, int d_x, int d_y){}
// bool visitRook(Rook *rook, int d_x, int d_y){}
// bool visitPawn(Pawn *pawn, int d_x, int d_y){}


#endif /* CheckMateVisitor_hpp */
