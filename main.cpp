#include <iostream>
#include <string>
#include "queen.hpp"
#include "rook.hpp"
#include "king.cpp"
#include "bishop.cpp"
#include "pieceVisitor.hpp"
#include "visitor.hpp"
#include "chessPiece.hpp"


int main()
{
    PieceVisitor *visitor = new PieceVisitor();
//    ChessPiece *king = new King(4,0,'w','K');
    ChessPiece *bishop = new Bishop(2,0,'w','B');


    std::cout << bishop->get_X() << std::endl;
    std::cout << bishop->get_Y() << std::endl;
    std::cout << bishop->get_name() << std::endl;
    std::cout << bishop->get_color() << std::endl;
  
    if(bishop->accept(visitor,6,1))
    {
        std::cout << "move valid" << std::endl;

    }
    else
    {
        std::cout << "move invalid" << std::endl;
    }

    return 0;

};
