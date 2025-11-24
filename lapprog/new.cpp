#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stdlib.h>

using namespace std;

// get the computer move
char getComputerMove()
{

    int move;

    // generating random number between 0 - 2

    srand(time(NULL));

    move = rand() % 3;



    // returning move based on the random number generated

    if (move == 0) {

        return 'p';

    }

    else if (move == 1) {

        return 's';

    }

    return 'r';
}


// Function to return the result of the game

int getResults(char playerMove, char computerMove)
{

    // condition for draw

    if (playerMove == computerMove) {

        return 0;

    }



    // condition for win and loss according to game rule

    if (playerMove == 's' && computerMove == 'p') {

        return 1;

    }

    if (playerMove == 's' && computerMove == 'r') {

        return -1;

    }

    if (playerMove == 'p' && computerMove == 'r') {

        return 1;

    }

    if (playerMove == 'p' && computerMove == 's') {

        return -1;

    }

    if (playerMove == 'r' && computerMove == 'p') {

        return -1;

    }

    if (playerMove == 'r' && computerMove == 's') {

        return 1;

    }



    return 0;
}
 char getplayermove1(){
    int move;
 }
 char getplayermove2(){
    int move;
 }
int getResult(char playermove1, char playermove2)
{
    if(playermove1==playermove2){
        return 0;
    }
    //condition for win and loss according to the game rule
    
    if(playermove1=='s'&&playermove2=='r'){
        return -1;
    }
    if(playermove1=='r'&& playermove2=='s'){
        return 1;
    }
    if(playermove1=='s'&& playermove2=='p'){
        return 1;
    }
    if(playermove1=='p'&& playermove2=='s'){
        return -1;
    }
    if(playermove1=='p' && playermove2=='r'){
        return 1;
    }
    if(playermove1=='r' && playermove2=='p'){
        return -1;
    }
    return 0;


}


// driver code

int main()
{
    char playerMove ,playermove1,playermove2;

    int num;
    cout<<" 1 To play with the computer"<<endl;

    cout<<"2 To play with two player"<<endl;

    cout<<"3 to exit the game"<<endl;

    cin>>num;
    switch(num) 
    {
     case 1:
     cout << "\n\n\n\t\t\tWelcome to rock Paper Scissor "

            "Game\n";
            cout << "\n\t\tEnter r for ROCK, p for PAPER, and s "

            "for SCISSOR\n\t\t\t\t\t";
     


    // input from the user

    while(1) {

        cin >> playerMove;

        if (playerMove == 'p' || playerMove == 'r' || playerMove == 's') {

            break;

        }

        else {

            cout << "\t\t\tInvalid Player Move!!! Please Try Again." << endl;

        }

    }


    // computer move

    char computerMove = getComputerMove();

     


    int result = getResults(playerMove, computerMove);




    // priting result based on who won the game

    if (result == 0) {

        cout << "\n\t\t\tGame Draw!\n";

    }

    else if (result == 1) {

        cout << "\n\t\t\tCongratulations! Player won the "

                "game!\n";

    }

    else {

        cout << "\n\t\t\tOh! Computer won the game!\n";
    }
        break;

        case 2:

        cout << "\n\n\n\t\t\tWelcome to rock Paper Scissor "

            "Game\n";
            cout << "\n\t\tEnter r for ROCK, p for PAPER, and s "

            "for SCISSOR\n\t\t\t\t\t";
     


    // input from the user

    while(1) {

        cout<<"Enter your move player 1";
        cin>>playermove1;
        cout<<"Enter your move player 2";
        cin>>playermove2;
        if(playermove1=='p'||playermove1=='r'||playermove1=='s' && playermove2=='r'||playermove2=='s'||playermove2=='p'){
            break;
        }
        else{
            cout<<"\t\t\tInvalid player move!!! pleas try again"<<endl;
        }
    }
    //playermove1
    char playermove1=getplayermove1();
    int result=getResult(playermove1,playermove2);
    //printing result based on who won the game
    if(result==0){
        cout<<"\n\t\t\tGame Draw!\n";
    }
    else if(result==1){
        cout<<"\n\t\t\tCongratulations! player 1 won the game and try next time player 2 ";
    }
    else{
        cout<<"\n\t\t\tCongratulations! player 2 won the game and try next time player 1";
    }
      break;
       
       case 3:
           exit(0);
    }

    return 0;
}


