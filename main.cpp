#include <iostream>
#include <string>
#include "Queen.hpp"
#include "Rook.hpp"
#include "King.cpp"
#include "PieceVisitor.hpp"
#include "Visitor.hpp"
#include "ChessPiece.hpp"


int main()
{
    PieceVisitor *visitor = new PieceVisitor();
    ChessPiece *king = new King(5,0,'w','K');



    std::cout << king->get_X() << std::endl;
    std::cout << king->get_Y() << std::endl;
    std::cout << king->get_name() << std::endl;
    std::cout << king->get_color() << std::endl;
  
    if(king->accept(visitor,4,0))
    {
        std::cout << "move valid" << std::endl;

    }
    else
    {
        std::cout << "move invalid" << std::endl;
    }

    return 0;

};
