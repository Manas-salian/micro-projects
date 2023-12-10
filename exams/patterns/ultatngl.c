#include<stdio.h>
void main(){
	int r,c;
	for(r=1;r<=4;r++){
		for(c=0;c<=4-r;c++)
			printf("* ");
		printf("\n");
	}
}