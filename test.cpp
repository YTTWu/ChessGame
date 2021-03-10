#include "gtest/gtest.h"

#include "rook.cpp"
#include "queen.cpp"
#include "knight.cpp"
#include "king.cpp"
#include "bishop.cpp"
#include "pawn.cpp"
#include "chessPiece.hpp"
#include "piecevisitor.hpp"

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


TEST(ChessPiece, pwan1)
{
    int temp;
    
    ChessPiece *pawn = new Pawn(0,1,'w','p');
    
    temp = pawn->get_X();
    
    EXPECT_EQ(temp, 0);

}

TEST(ChessPiece, pwan2)
{
    int temp;

    ChessPiece *pawn = new Pawn(0,1,'w','p');

    temp = pawn->get_Y();

    EXPECT_EQ(temp, 1);

}


TEST(ChessPiece, pwa3)
{
    char temp;

    ChessPiece *pawn = new Pawn(0,1,'w','p');

    temp = pawn->get_color();

    EXPECT_EQ(temp, 'w');

}




TEST(ChessPiece, pwan4)
{
    char temp;

    ChessPiece *pawn = new Pawn(0,1,'w','p');

    temp = pawn->get_name();

    EXPECT_EQ(temp, 'p');

}




TEST(ChessPiece, rook1)
{
    int temp;

    ChessPiece *rook = new Rook(7,7,'w','r');

    temp = rook->get_X();

    EXPECT_EQ(temp, 7);


}




TEST(ChessPiece, rook2)
{
    int temp;

    ChessPiece *rook = new Rook(7,7,'w','r');

    temp = rook->get_Y();

    EXPECT_EQ(temp, 7);


}


TEST(ChessPiece, rook3)
{
    char temp;

    ChessPiece *rook = new Rook(7,7,'w','r');

    temp = rook->get_color();

    EXPECT_EQ(temp, 'w');


}


TEST(ChessPiece, rook4)
{
    char temp;

    ChessPiece *rook = new Rook(7,7,'w','r');

    temp = rook->get_name();

    EXPECT_EQ(temp, 'r');


}



TEST(PieceVisitor, visitPawn1)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *pawn = new Pawn(6,4,'w','p');   

    temp = pawn->accept(visitor, 7,7);   

    EXPECT_EQ(temp, false);
}


TEST(PieceVisitor, visitPawn2)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *pawn = new Pawn(6,4,'w','p');

    temp = pawn->accept(visitor, 5,4);

    EXPECT_EQ(temp, true);
}


TEST(PieceVisitor, visitPawn3)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *pawn = new Pawn(1,0,'w','p');

    temp = pawn->accept(visitor, 5,6);

    EXPECT_EQ(temp, false);
}


TEST(PieceVisitor, visitPawn4)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *pawn = new Pawn(1,5,'w','p');

    temp = pawn->accept(visitor, 3,5);

    EXPECT_EQ(temp, true);
}


TEST(PieceVisitor, visitPawn5)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *pawn = new Pawn(6,1,'w','p');

    temp = pawn->accept(visitor, 6,2);

    EXPECT_EQ(temp, false);
}


TEST(PieceVisitor, visitRook1)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *rook = new Rook(5,5,'w','p');

    temp = rook->accept(visitor, 6,6);

    EXPECT_EQ(temp, false);
}

TEST(PieceVisitor, visitRook2)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *rook = new Rook(0,0,'b','R');

    temp = rook->accept(visitor, 7,0);

    EXPECT_EQ(temp, true);
}


TEST(PieceVisitor, visitRook3)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *rook = new Rook(7,7,'b','R');

    temp = rook->accept(visitor, 1,6);

    EXPECT_EQ(temp, false);
}


TEST(PieceVisitor, visitRook4)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *rook = new Rook(6,6,'b','R');

    temp = rook->accept(visitor, 4,6);

    EXPECT_EQ(temp, true);
}

TEST(PieceVisitor, visitRook5)
{
    bool temp;

    PieceVisitor *visitor = new PieceVisitor();

    ChessPiece *rook = new Rook(2,4,'b','R');

    temp = rook->accept(visitor, 2,7);

    EXPECT_EQ(temp, true);
}



