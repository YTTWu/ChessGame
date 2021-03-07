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
 
 ![OMT Diagram](https://github.com/cs100/final-project-cmena004-ywu352-vpate048/blob/master/ChessGame-v2.jpg?raw=true)
 
Class diagram description:

The diagram begins with ChessGame which will contain the methods to start the game(startGame()) and decide the winner(decideWinner()). This will also contain two player object to create player 1(*player_1) and 2(*player_2), as well as a board object(*board).

The Board class will contain a printBoard()(print out the board visually) and printChessPieces()(a 2D vector visually). The vector will contain all 32 chess pieces. It will also contain a private member that is an object of ChessPiece. 

Player will contain a move function that will determine current position and where the player wants to move to. 

We will use a visitor and strategy pattern for our chess game. The strategy pattern will be used for the class ChessPiece. We use strategy pattern to decide what move() function to implement depend on the players choice. The visitor pattern will be used to check each move and determine if it is valid, it will also determine if there is a check or checkmate.
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

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
 
