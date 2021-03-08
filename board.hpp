#ifndef board_hpp
#define board_hpp
#include <stdio.h>
#include <string>
#include <iostream>
#include "pawn.cpp"
#include "rook.hpp"
#include "queen.hpp"
#include "knight.hpp"
#include "king.hpp"
#include "bishop.hpp"
#include "piecevisitor.hpp"



class Board{
private:
ChessPiece *board[8][8]; //array

public:
Board();
~Board(); // need to do
ChessPiece* getPiece(int x, int y);
void resetBoard();
void printBoard();//needs tests and check if built correctly
bool checkAccept(ChessPiece *piece, int d_x, int d_y);


};

#endif


