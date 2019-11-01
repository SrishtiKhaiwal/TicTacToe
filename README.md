# TicTacToe

We all have played TIC TAC TOE in our school days by using pen and paper.I have developed a mini project in which their is no use of any graphics ,it's just a simple console applications which is written in C language in a very simple manner.

Rules of the Game

1. The game is to be played between two people.
2. One of the player chooses ‘O’ and the other ‘X’ to mark their respective cells.
3. The game starts with one of the players and the game ends when one of the players has one whole row/ column/ diagonal filled with his/her respective character (‘O’ or ‘X’).
4. If no one wins, then the game is said to be draw.

Strategy to be used to win the game

1. Play your first X in a corner
2. Try to win if your opponent plays the first O in the center. 
3. Win automatically if your opponent plays his first O in any square besides the center. 
4. Place your third X so you have two possible winning moves. 
5. Win with your fourth X.

FUNCTIONS USED IN THE CODE
1. int game_result() -> FUNCTION FOR CHECKING GAME STATUS
2. void box -> FUNCTION FOR CREATING A BOARD WITH 'X' AND 'O' MARKS
