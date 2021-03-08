
#include "Board.hpp"


Board::Board(){
 // assign board with nullptr first 
    for(unsigned int i = 0; i < 8; i++){
        for(unsigned int j = 0; j < 8; j++){
            board[i][j] = nullptr;
        }
    }
}
 
Board::~Board(){}

ChessPiece* Board::GetPiece(int x, int y){

    return board[x][y];
}

void Board::resetBoard(){
    //building piece objects
     ChessPiece* r1 = new Rook(0,0, 'b', 'R');
    ChessPiece* r2 = new Rook(0,7, 'b', 'R');
    ChessPiece* r3 = new Rook(7,0, 'w', 'r');
    ChessPiece* r4 = new Rook(7,7,'w', 'r');
    ChessPiece* n1 = new Knight(0,1,'b', 'N');
   ChessPiece* n2 = new Knight(0,6, 'b', 'N');
   ChessPiece* n3 = new Knight(7,1, 'w', 'n');
    ChessPiece* n4 = new Knight(7,6,'w', 'n');
    ChessPiece* b1 = new Bishop(0,2, 'b', 'B');
   ChessPiece* b2 = new Bishop(0,5, 'b', 'B');
    ChessPiece* b3 = new Bishop(7,2,'w', 'b');
    ChessPiece* b4 = new Bishop(7,5,'w', 'b');
   ChessPiece* k1 = new King(0,3, 'b', 'K');
    ChessPiece* k2 = new King(7,3,'w', 'k');
    ChessPiece* q1 = new Queen(0,4, 'b', 'Q');
    ChessPiece* q2 = new Queen(7,4,'w', 'q');
    ChessPiece *p1 = new Pawn(1,0, 'b', 'P');
    ChessPiece *p2 = new Pawn(1,1,'b', 'P');
    ChessPiece *p3 = new Pawn(1,2,'b', 'P');
    ChessPiece *p4 = new Pawn(1,3,'b', 'P');
    ChessPiece *p5 = new Pawn(1,4,'b', 'P');
    ChessPiece *p6 = new Pawn(1,5,'b', 'P');
    ChessPiece *p7 = new Pawn(1,6,'b', 'P');
    ChessPiece *p8 = new Pawn(1,7,'b', 'P');
    ChessPiece *p9 = new Pawn(6,0,'w', 'p');
    ChessPiece *p10 = new Pawn(6,1,'w', 'p');
    ChessPiece *p11 = new Pawn(6,2,'w', 'p');
    ChessPiece *p12 = new Pawn(6,3,'w', 'p');
    ChessPiece *p13 = new Pawn(6,4,'w', 'p');
    ChessPiece *p14 = new Pawn(6,5,'w', 'p');
    ChessPiece *p15 = new Pawn(6,6,'w', 'p');
    ChessPiece *p16 = new Pawn(6,7,'w', 'p');

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
    std::cout << " ============= CHESS GAME ================" << std::endl;
     std::cout << "  0    1   2   3   4   5   6   7" << std::endl;
    std::cout << " _________________________________" << std::endl;
    for(unsigned int i = 0; i < 8; i++){
        for(unsigned int j = 0; j < 8; j++){
            std::cout << " | ";
            if(board[i][j] != nullptr){
                std::cout << board[i][j]->get_name(); 
            }
            else{
             std::cout << ' ';
            }
            
        }
        std::cout << " |" << std:: endl;
        int ycor =(7-i);
        std::cout << ycor << "|___|___|___|___|___|___|___|___|" << std::endl ;
       
    }
    
}


bool Board::CheckAccept ( ChessPiece *piece, int d_x, int d_y){
    PieceVisitor* visitor = new PieceVisitor();
    //check if move follows rule for piece
    if(piece->accept(visitor, d_x, d_y)){
        if( board[d_x][d_y] != nullptr){
            if(board[d_x][d_y]->get_color() ==  piece->get_color()){
           return false;    //if spot has ur color piece send false
             }
            else{
           std::cout << board[d_x][d_y]->get_color() << " " << board[d_x][d_y]->get_name() << "was killed " << std::endl; //take over piece
             }
    }
    // assign piece to new spot and reset old spot 
    board[d_x][d_y] = piece;   //replace spot with new 
    board[piece->get_X()][piece->get_Y()] = nullptr;
    piece->set_X(d_x);
    piece->set_Y(d_y);
    return true;
    }

    else { return false;}
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
