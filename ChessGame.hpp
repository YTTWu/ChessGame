#ifndef ChessGame_hpp
#define ChessGame_hpp

#include <stdio.h> 
class ChessGame{
private: 
Board *ChessBoard;

public:
ChessGame():
~ChessGame();
void startGame();
void decideWinner();

};


#endif //ChessGame.hpp

