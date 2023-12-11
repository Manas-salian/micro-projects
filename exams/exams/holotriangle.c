#include<stdio.h>
void main(){
	int space,r,c,rows;
	printf("enter the numeber of rows: ");
	scanf("%d",&rows);
	for(r=0;r<rows;r++){
		for(space = 1;space<=rows-r;space++){
			printf(" ");
		}
		for(c= 0;c<=r;c++)
		{
			if(r==0||r==rows-1||c==0||c==r)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}




/*
	for(r=0;r<5;r++){
		for(space = 1;space<=5-r;space++){
			printf(" ");
		}
		for(c= 0;c<=r;c++)
		{
			if(r==0||r==4||c==0||c==r)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

*/

