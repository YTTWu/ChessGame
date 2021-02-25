#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <vector>
#include "ChessPiece.hpp"

class Board
{
private:
    vector<vector><ChessPiece*>> chessPieces;
    
public:
    Board();
    ~Board();
    void printBoard();
    void resetBoard();
    chessPiece *findObject(char x, char y);
    
    };
#endif /* Board_hpp */
