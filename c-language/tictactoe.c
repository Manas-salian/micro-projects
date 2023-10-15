/*********************************************************************
A a simple command line tic-tac-toe program built using c.
switches the players piece(o/x) depending upon user choice.
date:15-10-2023
important reference:
scanf newline in bufffer issue :
https://stackoverflow.com/questions/5240789/scanf-leaves-the-newline-character-in-the-buffer
*********************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>        // for seeding the srand()

char p_pwn,c_pwn,win,move;
char a[3][3] =  { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

void display();
void p_play();
void p_1move();
void c_play();
void c_1move();
int wincheck();

int main(){
	char move;         //for the first move selection part.
	srand(time(0));                                   //it is used to seed the rand() function inside c_play
	printf("-------TIC-TAC-TOE-------\n");            // it has to be seeded only once during entire runtime so 
	printf("what do you want to play as?(o/x):\t");   //we must place it in th beginning of the code.
	scanf(" %c",&p_pwn);
	 
	if(p_pwn == 'o' || p_pwn == 'O')                  //to select the player's piece
		c_pwn = 'x';
	else
		if(p_pwn == 'x' || p_pwn == 'X')	
		c_pwn = 'o';
		else{
			printf("Invalid Input!\n");
			exit(0);
		}

	printf("Do you want to make the first move?(y/n):\t");
	scanf(" %c",&move);
	
	if(move == 'y' || move == 'Y')
		p_1move();
	else
		if(move == 'n' || move == 'N')
			c_1move();
		else{
			printf("Invalid Input!!");
			exit(0);
		}

	if(wincheck()!= -1)
		if (win == '0')
			printf("It's a Tie!\n");
		else
			printf("the winner is %c\n",win);		
}

void display(){
	printf("  %c | %c | %c  \n",a[0][0],a[0][1],a[0][2]);
	printf("----|---|----\n");
	printf("  %c | %c | %c  \n",a[1][0],a[1][1],a[1][2]);
	printf("----|---|----\n");
	printf("  %c | %c | %c  \n",a[2][0],a[2][1],a[2][2]);
}

void p_play(){
	unsigned int x,y;
	printf("Your move(enter coordinates):\t");
	scanf("%d%d",&x,&y);

	if(a[x][y]^p_pwn && a[x][y]!=c_pwn)  //xor is used it returns low when both are 
		a[x][y]=p_pwn;                   //same thus you cannot give 2 inputs to the same cell
	else{
		printf("Invalid move\n");
		p_play();
	}
}

void c_play(){
	int rnd_1,rnd_2;
	printf("My move:\n");
	rnd_1 = (rand()%3);                  // generate random numbers between 0 to 2 and store to variables
	rnd_2 = (rand()%3);
	if((a[rnd_1][rnd_2]^c_pwn) && (a[rnd_1][rnd_2]!=p_pwn))  /// checks that the random coordinates are not preoccupied   
		a[rnd_1][rnd_2]=c_pwn;                               /// by c_pwn using xor to check for p_pawn uses != combined with &&
	else
		c_play();
}

int wincheck(){
	if(a[0][0]==a[0][1]&&a[0][1]==a[0][2])
		win = a[0][2];
	else
		if(a[1][0]==a[1][1]&&a[1][1]==a[1][2])
		win = a[1][0];
	else
		if(a[2][0]==a[2][1]&&a[2][1]==a[2][2])
		win = a[2][0];
	else
		if(a[0][0]==a[1][0]&&a[1][0]==a[2][0])
		win = a[1][0];
	else
		if(a[0][1]==a[1][1]&&a[1][1]==a[2][1])
		win = a[0][1];
	else
		if(a[0][2]==a[1][2]&&a[1][2]==a[2][2])
		win = a[0][2];
	else
		if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
		win = a[1][1];
	else
		if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
		win = a[0][2];
	else
		if(a[0][0]^a[0][1]^a[0][2]^a[1][0]^a[1][1]^a[1][2]^a[2][0]^a[2][1]^a[2][2])
		win = '0';
	else
		return -1;	
}

void p_1move(){
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
}

void c_1move(){
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
	p_play();
	display();
	c_play();
	display();
}