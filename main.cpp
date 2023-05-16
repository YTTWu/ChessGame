#include "chessPiece.hpp"
#include "knight.hpp"
#include "pawn.hpp"
#include "rook.hpp"
#include "bishop.hpp"
#include "queen.hpp"
#include "king.hpp"
#include "visitor.hpp"
#include "piecevisitor.hpp"
#include "board.cpp"
#include <iostream>
#include <string>
#include<stdlib.h>

 
int main (){
    Board* chessboard = new Board();
    chessboard->resetBoard();
    chessboard->printBoard();
    chessboard->printPrompt();
    
    delete chessboard;



return 0;

}


