#include<stdio.h>
void main(){
	int n,fact = 1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	while(n>0){
		fact=fact*n;
		n--;
	}
	printf("Factorial = %d\n",fact);
}