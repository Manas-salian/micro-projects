#include<stdio.h>
void main(){
	int space,r,c;
	for(r=0;r<5;r++){
		for(space=0;space<5-r;space++)
			printf(" ");
		for(c=0;c<5;c++){
			if(r==0||r==4||c==0||c==4){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}