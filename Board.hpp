fndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <vector>
class Board{
private: 
ChessPiece board[8][8]; //array


public:
Board::Board();
Board::~Board();
Board::Board(){
   ChessPiece* board[8][8] = nullptr;

   
}
void Board::resetBoard(){

    char white = w;
    char black = b;
    Rook* r1 = new Rook(black, 0, 0);
    Rook* r2 = new Rook(black);
    Rook* r3 = new Rook(white);
    Rook* r4 = new Rook(white);
    Knight* n1 = new Knight(black);
    Knight* n2 = new Knight(black);
    Knight* n3 = new Knight(white);
    Knight* n4 = new Knight(white);
    Bishop* b1 = new Bishop(black);
    Bishop* b2 = new Bishop(black);
    Bishop* b3 = new Bishop(white);
    Bishop* b4 = new Bishop(white);
    King* k1 = new King(black);
    King* k2 = new King(white);
    Queen* q1 = new Queen(black);
    Queen* q2 = new Queen(white);


    board[0][0] = r1;
    board[0][7] = r2;
    board[7][0] = r3;
    board[7][7] = r4;
    board[0][1] = n1;
    board[0][6] = n2;
    board[7][1] = n3;
    board[7][6] = n4;
    board[0][2] = b1;
    board[0][5] = b2;
    board[7][2] = b3;
    board[7][5] = b4;
    board[0][3]= k1;
    board[7][3]= k2;
    board[0][4]= q1;
    board[7][4]= q2;
   
    for( int i=0; i < 8; i++){
        Pawn *pawn = new Pawn(black);
        board[1][i]= pawn;
    }
    for( int i=0; i < 8; i++){
        Pawn *pawn = new Pawn(white);
        board[6][i]= pawn;
    }
    
}

void Board::printBoard(){
    for(unsigned i = 0; i < 8; i++){
        for(unsigned j = 0; j < 8; j++){
            board[i][j].print();
        }
    }
}

bool Board::CheckAccept (){
    /*- 
 *     How CheckAccept function in Board will work:
 *         Check if move is valid by checking that the new position isn't occupied by same players piece by color
 *             Then use accept function of piece (board[x][x].accept(new location)) to check that it follows the piece's movement rules
 *
 *                 each piece has an accept fxn, new location x and y are parameters, returns true/false:
 *                      use this function to check that the move is valid by the piece rules
 *                           use if statements to check that the new location is valid by piece rules
 *                                if valid update piece location variables to new location, no issue becuase other problems would've already been checked by checkAccept
 *                                     function in Board
 *                                          
 *                                              */
}

};


#endif
