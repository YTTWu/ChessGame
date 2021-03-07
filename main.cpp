#include "chessPiece.hpp"
#include "knight.hpp"
#include "pawn.cpp"
#include "bishop.hpp"
#include "visitor.hpp"
#include "piecevisitor.hpp"
#include <iostream>
#include <string>



int main()
{
    PieceVisitor *visitor = new PieceVisitor();
    ChessPiece *pawn = new Pawn(0,1,'w','N');

    std::cout << pawn->get_X() << std::endl;
    std::cout << pawn->get_Y() << std::endl;
    std::cout << pawn->get_name() << std::endl;
    std::cout << pawn->get_color() << std::endl;
  
    if(pawn->accept(visitor,0,3))
    {
        std::cout << "move valid" << std::endl;

    }
    else
    {
        std::cout << "move invalid" << std::endl;
    }

    return 0;

};

