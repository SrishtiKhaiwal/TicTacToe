#include<iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
//TIC TAC TOE HAVE 9 COLUMNS,HERE WE ARE GIVING NAME TO EACH COLUMN
char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};//GLOBAL DECLARATION
int game_result();//FUNNCTION FOR CHECKING GAME STATUS
void gamebox();//FUNCTION FOR CREATING A BOARD WITH 'X' AND 'O' MARK
int main()
{
    int i=-1, choice,player;
    printf("\n Enter your choice of player among player 1 or player 2\n");
    scanf("%d",&player);
    char mark;//THIS IS FOR ASSIGNING MARK TO PLAYER 1 AND PLAYER 2 THAT IS 'X' AND 'O'
    printf("\n \t LET'S START THE GAME \n");
    while(i==-1)
    {
        gamebox();
        if(player%2==1)
        {
        player=1;
        printf("Player 1, enter the square number =: ");
    }
        else
        {
        player=2;
        printf("Player 2, enter the square number =: ");
    }
        scanf("%d", &choice);
        if(player == 1)
        mark='X';//PLAYER ASSIGNED MARK 'X'
        else
        mark='O';//PLAYER ASSIGNED MARK 'O'
       //CHECKING CHOICES AND ASSIGNED 'X' AND 'O' TO THE SQUARE BOX
        if (choice == 1 && square[0] == '1')
            square[0] = mark;

        else if (choice == 2 && square[1] == '2')
            square[1] = mark;

        else if (choice == 3 && square[2] == '3')
            square[2] = mark;

        else if (choice == 4 && square[3] == '4')
            square[3] = mark;

        else if (choice == 5 && square[4] == '5')
            square[4] = mark;

        else if (choice == 6 && square[5] == '6')
            square[5] = mark;

        else if (choice == 7 && square[6] == '7')
            square[6] = mark;

        else if (choice == 8 && square[7] == '8')
            square[7] = mark;

        else if (choice == 9 && square[8] == '9')
            square[8] = mark;

        else
        {
            printf("Invalid move,please enter correct number");
            player--;
            getch();
        }
        i = game_result();//CALLING FUNCTION AND VALUE OF RETURN STORED IN i
        player++;
    }//UNTILL GAME IS IN PROGRESS

    gamebox();
    if (i == 1)//CHECKING WHO WON THE GAME AMONG PLAYER 1 OR PLAYER 2
        printf("\n Player %d win ",--player);
    else
        printf("\n Game draw");

    getch();
}
int game_result()
{
    if (square[0] == square[1] && square[1] == square[2])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[3] == square[4] && square[4] == square[5])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[6] == square[7] && square[7] == square[8])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[0] == square[3] && square[3] == square[6])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[0] == square[4] && square[4] == square[8])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[2] == square[4] && square[4] == square[6])
        return 1;// FOR GAME IS OVER WITH WINNER

    else if (square[0] != '1' && square[1] != '2' && square[2] != '3' &&
        square[3] != '4' && square[4] != '5' && square[5] != '6' && square[6]
       != '7' && square[7] != '8' && square[8] != '9')

        return 0;// FOR GAME IS OVER WITH NO RESULT
    else
        return  - 1;//FOR GAME IS IN PROGRESS
}

void gamebox()
{

    printf("\n\n\tTIC TAC TOE\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[0], square[1], square[2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[3], square[4], square[5]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[6], square[7], square[8]);

    printf("     |     |     \n\n");
}
////////////////////////////////////////////////////////////////////////////////
                              //THANK YOU//
////////////////////////////////////////////////////////////////////////////////
