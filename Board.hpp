#ifndef Board_hpp
#define Board_hpp
#include <stdio.h>
#include <string>
#include <iostream>
#include "chessPiece.hpp"

class Board{
private: 
ChessPiece *board[8][8]; //array

public:
Board();
~Board(); // need to do
ChessPiece* GetPiece(int x, int y);
void resetBoard();
void PrintBoard();//needs tests and check if built correctly
bool CheckAccept(ChessPiece *piece, int d_x, int d_y);//unfinished


};

#endif
