
#include "board.hpp"


Board::Board(){
    
    for(unsigned int i = 0; i < 8; i++){
        for(unsigned int j = 0; j < 8; j++){
            board[i][j] = nullptr;
        }
    }
}
Board::~Board(){}

 ChessPiece* Board::getPiece(int x, int y){
    
    return board[x][y];
}

void Board::resetBoard(){

    
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
        std::cout << i << "|___|___|___|___|___|___|___|___|" << std::endl ;
       
    }
     
}

                           
bool Board::checkAccept ( ChessPiece *piece, int d_x, int d_y){
    PieceVisitor* visitor = new PieceVisitor();
    
    if(piece->accept(visitor, d_x, d_y)){
        if( board[d_x][d_y] != nullptr){
            if(board[d_x][d_y]->get_color() ==  piece->get_color()){
           std::cout << "your piece there not movable"<< std::endl;
             }
            else{
           std::cout << board[d_x][d_y]->get_color() << " " << board[d_x][d_y]->get_name() << "was killed " << std::endl;
             }
         }
    
        board[d_x][d_y] = piece;
        board[piece->get_X()][piece->get_Y()] = nullptr;
        piece->set_X(d_x);
        piece->set_Y(d_y);
        printBoard();
        return true;
    }

    else {
        std::cout << "Invalid move" << std::endl;
        return false;
        
        }
   
}


