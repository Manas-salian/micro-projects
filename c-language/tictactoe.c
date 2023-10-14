#include<stdio.h>
#include<stdlib.h>
#include<time.h>// for seeding the srand()


///try implementing bitwise or logical and for win check function.
// implement radom function for the computer player

char p_pwn,c_pwn;
char a[3][3] =  { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };

void display();
void c_play(); 
void p_play();
char wincheck();
//int c_play();

int main(){
	char sub; /// for wincheck
	srand(time(0)); //it is used to seed the rand() function inside c_play it has to be seeded only once during entire runtime so we must place it in th beginning of the code.
	printf("-------TIC-TAC-TOE-------\n");
	printf("what do you want to play as?(o/x):\t");
	scanf("%c",&p_pwn); //to select the player's piece
	switch(p_pwn){      //it changes the computer piece accordingly
	case 'o':
		c_pwn='x';
		printf("%c\n",c_pwn);
		break;

	case 'O':
		c_pwn='x';
		printf("%c\n",c_pwn);
		break;

	case 'x':
		c_pwn='o';
		printf("%c\n",c_pwn);
		break;

	case 'X':
		c_pwn='o';
		printf("%c\n",c_pwn);
		break;

	default:
		printf("Invalid Input!\n");
		exit(0);
	}
	
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
	sub = wincheck(); //testing of wincheck function
	printf("the winner is %c",sub);
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

	if(a[x][y]^p_pwn)  //xor is used it returns low when both are same thus you cannot give 2 inputs to the same cell
		a[x][y]=p_pwn;
	else{
		printf("Invalid move\n");
		p_play(); /// try recursive just like c_play
	}
}

void c_play(){
	int rnd_1,rnd_2;
	printf("My move:\n");
	rnd_1 = (rand()%3);// generate random numbers between 0 to 2 and store to variables
	rnd_2 = (rand()%3);
	if((a[rnd_1][rnd_2]^c_pwn) && (a[rnd_1][rnd_2]!=p_pwn))  /// checks that the random coordinates are not preoccupied by c_pwn using xor to check for p_pawn uses != combined with &&  
		a[rnd_1][rnd_2]=c_pwn;
	else
		c_play();
}


char wincheck(){
	char win = -1;
	if(a[0][0]==a[0][1]&&a[0][1]==a[0][2])
		win = a[0][2];

	if(a[1][0]==a[1][1]&&a[1][1]==a[1][2])
		win = a[1][0];

	if(a[2][0]==a[2][1]&&a[2][1]==a[2][2])
		win = a[2][0];

	if(a[0][0]==a[1][0]&&a[1][0]==a[2][0])
		win = a[1][0];

	if(a[0][1]==a[1][1]&&a[1][1]==a[2][1])
		win = a[0][1];

	if(a[0][2]==a[1][2]&&a[1][2]==a[2][2])
		win = a[0][2];

	if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
		win = a[1][1];

	if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
		win = a[0][2];

	return win;
}