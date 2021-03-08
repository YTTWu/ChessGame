#include <iostream>
#include <string>
#include "Queen.hpp"
#include "Rook.hpp"
#include "King.cpp"
#include "Bishop.cpp"
#include "PieceVisitor.hpp"
#include "Visitor.hpp"
#include "ChessPiece.hpp"


int main()
{
    PieceVisitor *visitor = new PieceVisitor();
//    ChessPiece *king = new King(4,0,'w','K');
    ChessPiece *bishop = new Bishop(2,0,'w','B');


    std::cout << bishop->get_X() << std::endl;
    std::cout << bishop->get_Y() << std::endl;
    std::cout << bishop->get_name() << std::endl;
    std::cout << bishop->get_color() << std::endl;
  
    if(bishop->accept(visitor,3,1))
    {
        std::cout << "move valid" << std::endl;

    }
    else
    {
        std::cout << "move invalid" << std::endl;
    }

    return 0;

};
