#include<stdio.h>
#include<stdlib.h>
int main(){
//0=rock,1=paper,2=scissors
int user_move,computer_move;
TOP:
while(1){

    printf("\nENTER YOUR MOVE\t   0 FOR ROCK\t1 FOR PAPER\t2 FOR SCISSORS\t 9 FOR EXIT");
    scanf("%d",&user_move);
    computer_move=rand()%3;//0,1,2
    if(user_move!=0&&user_move!=1&&user_move!=2&&user_move!=9){printf("\nINVALID MOVE\n");goto TOP;}
    {
    if(computer_move==0)
    printf("\n computer move is rock\n");
    if(computer_move==1)
    printf("\n computer move is paper\n");
    if(computer_move==2)
    printf("\n computer move is scissors\n");
    }

    if(user_move==9) exit(1);
    else if(user_move==0&&computer_move==1)printf("\nVOILA COMPUTER WINS\n");
    else if(user_move==0&&computer_move==2)printf("\nVOILA YOU WINS\n");
    else if(user_move==1&&computer_move==0)printf("\nVOILA YOU WINS\n");
    else if(user_move==1&&computer_move==2)printf("\nVOILA COMPUTER WINS\n");
    else if(user_move==2&&computer_move==0)printf("\nVOILA COMPUTER WINS\n");
    else if(user_move==2&&computer_move==1)printf("\nVOILA YOU WINS\n");
    else printf("\nITS TIE\n");

}
return 0;
}
