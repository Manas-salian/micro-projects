//demonstration of GOTO
#include<stdio.h>
void main(){
	printf("Hello ");
	goto l1;

	printf("How are you?");
	l1: printf("World\n");
}