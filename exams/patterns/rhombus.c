#include<stdio.h>
void main(){
	int space,r,c;
	for(r=1;r<=4;r++){
		for(space=1;space<=4-r;space++){
			printf("   ");
		}
		for(c=1;c<=4;c++){
			printf("*  ");
		}
		printf("\n");
	}
}