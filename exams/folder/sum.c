//sum of N natural numbers using WHILE
#include<stdio.h>
void main(){
	int n,sum = 0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	while(n>0){
		sum = sum + n;
		n--;
	}
	printf("Sum = %d\n",sum);
}