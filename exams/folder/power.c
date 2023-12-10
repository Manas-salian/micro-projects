//calculate power using WHILE loop
#include<stdio.h>
void main(){
	int base,exp,pow=1;
	printf("Enter the base and exponent: ");
	scanf("%d %d",&base,&exp);
	while(exp>0){
		pow = pow * base;
		exp--;
	}
	printf("Power = %d\n",pow);
}