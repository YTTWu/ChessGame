# Chess Game

 Authors: [Carolina Mena](https://github.com/cmena004),[Yuteng Terrence Wu](https://github.com/YTTWu),[Vraj Patel](https://github.com/vpate3356)

## Project Description


For our project, we decided to create a chess game. Chess is interesting due to many factors, one being that it is a complex game that requires analytical and strategic thinking. This is similar to programming which also requires logical thinking and evaluation of all moves which can affect the entire process. There are many possible combinations and strategies to play a game of chess and likewise in programming there are various ways to create a program. 
  
We plan on using C++ for our game via hammer. 

 Our game will have the following input and ouput:
  Input: Two users will each take turns on deciding where to move their individual chess pieces on the game board by using algebraic notation.   
  Output: Each player's moves and which coordinates their pieces move to will be displayed on a 2d board in the program. The board will be printed after every move.  Once the game is won by one of the two players,the player's name will be displayed as the winner. 
 
  
 We will implement the following design patterns:
  
 1. Strategy -
We chose this pattern to define each piece's movement since strategy patterns are used to manage algorithms and relationships between objects. Each individual piece will have its accept function implemenetation that is unique to it. A problem we will anticipate is making each piece move how its supposed to. To solve this, we will have a base abstract class which all classes can extend and have their own move implementations. 
 
 2. Visitor - 
We will use the visitor pattern to check if every move made is valid, this pattern will also determine if there is a check or a checkmate. Inside each type of pieces we have a accept method corresponded with the visit method. Since we have 6 different type we will have 6 unique visit method to check the user desired move is whether allowed within the Chess rule.

## Class Diagram
 
<img width="857" alt="chessGameUML1" src="https://user-images.githubusercontent.com/77029246/110759750-cd3ffb80-8202-11eb-9e16-7d0d99aae481.png">


 
Class diagram description:

The diagram begins with board.cpp which will essentially control the whole game.The class has 11  The Board class will contain a printBoard()(print out the board visually) and printChessPieces()(a 2D vector visually). The vector will contain all 32 chess pieces. It will also contain a private member that is an object of ChessPiece. 

Player will contain a move function that will determine current position and where the player wants to move to. 

We will use a visitor and strategy pattern for our chess game. The strategy pattern will be used for the class ChessPiece. We use strategy pattern to decide what move() function to implement depend on the players choice. The visitor pattern will be used to check each move and determine if it is valid, it will also determine if there is a check or checkmate.


 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
