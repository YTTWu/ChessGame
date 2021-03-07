
#include "Board.hpp"


Board::Board(){}
Board::~Board(){}

ChessPiece* Board::GetPiece(int x, int y){

    return board[x][y];
}

void Board::resetBoard(){

    white = w;
    black = b;
    //building piece objects
    Rook* r1 = new Rook(0,0, black, R);
    Rook* r2 = new Rook(0,7, black, R);
    Rook* r3 = new Rook(7,0, white, r);
    Rook* r4 = new Rook(7,7,white, r);
    Knight* n1 = new Knight(0,1,black, N);
    Knight* n2 = new Knight(0,6,black, N);
    Knight* n3 = new Knight(7,1, white, n);
    Knight* n4 = new Knight(7,6,white, n);
    Bishop* b1 = new Bishop(0,2, black, B);
    Bishop* b2 = new Bishop(0,5, black, B);
    Bishop* b3 = new Bishop(7,2,white, b);
    Bishop* b4 = new Bishop(7,5,white, b);
    King* k1 = new King(0,3, black, K);
    King* k2 = new King(7,3,white, k);
    Queen* q1 = new Queen(0,4, black, Q);
    Queen* q2 = new Queen(7,4,white, q);
    Pawn *p1 = new Pawn(1,0,black, P);
    Pawn *p2 = new Pawn(1,1,black, P);
    Pawn *p3 = new Pawn(1,2,black, P);
    Pawn *p4 = new Pawn(1,3,black, P);
    Pawn *p5 = new Pawn(1,4,black, P);
    Pawn *p6 = new Pawn(1,5,black, P);
    Pawn *p7 = new Pawn(1,6,black, P);
    Pawn *p8 = new Pawn(1,7,black, P);
    Pawn *p9 = new Pawn(6,0,white, p);
    Pawn *p10 = new Pawn(6,1,white, p);
    Pawn *p11 = new Pawn(6,2,white, p);
    Pawn *p12 = new Pawn(6,3,white, p);
    Pawn *p13 = new Pawn(6,4,white, p);
    Pawn *p14 = new Pawn(6,5,white, p);
    Pawn *p15 = new Pawn(6,6,white, p);
    Pawn *p16 = new Pawn(6,7,white, p);

    //loading board with pieces
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
    board[1][0]= p1;
    board[1][1]= p2;
    board[1][2]= p3;
    board[1][3]= p4;
    board[1][4]= p5;
    board[1][5]= p6;
    board[1][6]= p7;
    board[1][7]= p8;
    board[6][0]= p9;
    board[6][1]= p10;
    board[6][2]= p11;
    board[6][3]= p12;
    board[6][4]= p13;
    board[6][5]= p14;
    board[6][6]= p15;
    board[6][7]= p16;

}


void Board::printBoard(){
    for(unsigned i = 0; i < 8; i++){
        cout << "-------------------------"
        for(unsigned j = 0; j < 8; j++){
            cout << "|"
            cout << board[i][j]->get_Name(); 
        }
        cout << "|" << endl;
    }
}


                           
bool Board::CheckAccept ( ChessPiece *piece, int d_x, int d_y){
    //check if move follows rule for piece
    if(piece.move)


    if( board[d_x][d_y] != nullptr){
       if(board[d_x][d_y].getColor() ==  piece.getColor()){
           return false;    //if spot has ur color piece send false
       }
       else{
           cout << board[d_x][d_y].getColor() << " " << board[d_x][d_y].getName() << "was killed " << endl; //take over piece
       }
    }
   
    board[d_x][d_y] = piece;   //replace spot with new 
    board[piece.getX()][piece.getY()] = nullptr;
    piece.setX() = d_x;
    piece.setY() = d_y;
    return true;

    /*- 
    How CheckAccept function in Board will work:
    Check if move is valid by checking that the new position isn't occupied by same players piece by color
    Then use accept function of piece (board[x][x].accept(new location)) to check that it follows the piece's movement rules

    each piece has an accept fxn, new location x and y are parameters, returns true/false:
     use this function to check that the move is valid by the piece rules
     use if statements to check that the new location is valid by piece rules
     if valid update piece location variables to new location, no issue becuase other problems would've already been checked by checkAccept
     function in Board
     
    */
}

