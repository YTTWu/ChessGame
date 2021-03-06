#include"ChessGame.hpp"

void startGame(){
    ChessBoard.resetBoard();
    ChessPiece* curr;
    int counter=0;
    char current;
    int currX =0;
    int currY =0;
    int destX =0;
    int destY= 0;
    while(true) { //
        ChessBoard.print();
        if(counter % 2 ==0){
            cout << "White's turn to play:" << endl;
            current = w;
        }
        else { 
            cout << "Black's turn to play: " << endl; 
            current = b;
        }
        while(true){ // while loop for getting valid piece
             cout << " X-Coordinate of piece you want to move (0-7) : "
             cin >> currX;
              cout << " y-Coordinate of piece you want to move (0-7): "
             cin >> currY;
             curr = board.getPiece(currX, currY);
             if(curr.getColor()== current){
                 break;
             }
             cout << "Invalid piece Choose another:"
        }
          while(true){ // while loop for moving to valid plc
             cout << " X-Coordinate of piece you want to move to : "
             cin >> destX;
              cout << " y-Coordinate of piece you want to move to: "
             cin >> destY;
             if(ChessBoard.CheckAccept(curr, destX, destY) == true){
                 break;
             }
             cout << "Invalid piece Choose another:"
        }
        //check is game is over if it is break
    }




}


void decideWinner(){}
