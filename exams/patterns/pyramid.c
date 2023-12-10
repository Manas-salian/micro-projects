#include<stdio.h>
void main(){
	int space,r,c;
	for(r=1;r<=5;r++){
		for(space = 1;space<=5-r;space++){
			printf("  ");
		}

		for(c= 1;c<=r;c++){
			printf("*   ");
		}
		printf("\n");
	}
}