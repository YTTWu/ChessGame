# Chess Game

 Authors: [Carolina Mena](https://github.com/cmena004),[Yuteng Terrence Wu](https://github.com/YTTWu),[Vraj Patel](https://github.com/vpate3356)

## Project Description


For our project, we decided to create a chess game. Chess is interesting due to many factors, one being that it is a complex game that requires analytical and strategic thinking. This is similar to programming which also requires logical thinking and evaluation of all moves which can affect the entire process. There are many possible combinations and strategies to play a game of chess and likewise in programming there are various ways to create a program. 
  
We plan on using C++ for our game via hammer. 

Our game will have the following input and ouput:
  Input: Two users will each take turns on deciding where to move their individual chess pieces on the game board by using algebraic notation.   
  Output: Each player's moves and which coordinates their pieces move to will be updated and displayed on a new board in the program each time. The new board will be printed after every move.  Once the game is won by one of the two players,the side of the player(Black/White) will be displayed as the winner. 


 We will implement the following design patterns:

 1. Strategy -
We chose this pattern to define each chess pieces. Since strategy patterns are used to manage algorithms and relationships between objects. Each individual piece will have its accept function implemenetation that is unique to it. A problem we will anticipate is making each piece move how its supposed to. To solve this, we will have a base abstract class which all classes can extend and have their own overrited implementation and movement implementations through visitor patterns. 

 2. Visitor - 
We will use the visitor pattern to check if every move made is valid. Inside each type of pieces we have a accept method corresponded with the visit method. Since we have 6 different type we will have 6 unique visit method to check the user desired move is whether allowed within the Chess rule.

## Class Diagram
 
<img width="857" alt="chessGameUML1" src="https://user-images.githubusercontent.com/77029246/110759750-cd3ffb80-8202-11eb-9e16-7d0d99aae481.png">


 
Class diagram description:

The Board class will contain getPiece(int x, int y) to return the piece; resetBoard() to reset the piece coordinates; printBoard() to print out the board visually; checkAccept(ChessPiece *piece, int d_x, int d_y) to check if the move is within the chess rules; PathCheck(ChessPiece *piece, int d_x, int d_y) to make sure the move is valid on the board; printPrompt() to intereact with players; userInputCheck(int temp) and is_number(const std::string& s) are just small helper functions.

We will use a visitor and strategy pattern for our chess game. The strategy pattern will be used for the class ChessPiece. We use strategy pattern to decide what move() function to implement depend on the players choice. The visitor pattern will actually implement the chess piece moving rule for each piece and make sure it is valid. 

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 > 
<img width="601" alt="regendingvalgrind" src="https://user-images.githubusercontent.com/77029246/110769216-cae29f00-820c-11eb-9627-73fb32bc6eac.png">

 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > We used googletests for our chessPiece function and all of it's child classes. We tested their 4 variables which were int x-coor, int y-coor, char name, char color. We also tested each pieces movement with the implementation of PieceVisitor. We tested a variety of valid and invalid coordinates and moves to see where the pieces could move to and could not. By playing the game continously and trying to move pieces everywhere, we found bugs and were able to update our classes and functions accordingly. 
 > <img width="483" alt="testingpicpawnerror" src="https://user-images.githubusercontent.com/77029246/110769604-362c7100-820d-11eb-942a-08e11b68b3de.png">

