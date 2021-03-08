/*
#include "chessPiece.hpp"
#include "knight.cpp"
#include "pawn.cpp"
#include "bishop.cpp"
#include "rook.cpp"
#include "king.cpp"
#include "queen.cpp"
#include "visitor.hpp"
#include "piecevisitor.hpp"
#include <iostream>
#include <string>



int main()
{
    PieceVisitor *visitor = new PieceVisitor();
    
    ChessPiece *pawn = new Pawn(0,1,'w','N');
    ChessPiece *rook = new Rook(0,0,'w', 'R');
    ChessPiece *king = new King(0,0,'w', 'R');
    ChessPiece *queen = new Queen(2,3, 'w', 'Q');
    ChessPiece *bishop = new Bishop(5,7, 'B',  'D');
    ChessPiece *knight = new Knight(0,0,'w', 'R');
    

    std::cout << pawn->get_X() << std::endl;
    std::cout << pawn->get_Y() << std::endl;
    std::cout << pawn->get_color() << std::endl;
    std::cout << pawn->get_name() << std::endl;

    if(rook->accept(visitor,2,3))
    {
        std::cout << "move valid" << std::endl;

    }
    else
    {
        std::cout << "move invalid" << std::endl;
    }

    return 0;

};

*/

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
int currRow=0;
int currCol=0;
int destRow=0;
int destCol=0;
std:: cout << " Row of piece you want to move (0-7) : " << std::endl;
std::cin >> currRow;

std::cout << " Column of piece you want to move (0-7): " << std::endl;
std::cin >> currCol;

ChessPiece* curr = chessboard->getPiece(currRow, currCol);
std::cout <<"Moving Piece " << curr->get_name()<< " at spot (" << currRow << ","<< currCol << ")"<< std:: endl;

std:: cout << " Enter the Row number of where you want to move (0-7) : " << std::endl;
std::cin >> destRow;

std::cout << " Enter the Column number of where you want to move (0-7): " << std::endl;
std::cin >> destCol;

if(chessboard->checkAccept(curr, destRow, destCol) == true) {
    std::cout << " Piece moved to new spot" << std::endl;
}
else { std::cout << " Invalid move" << std::endl;}
std:: cout << "checker";
std::cout << curr->get_X();






return 0;

}

