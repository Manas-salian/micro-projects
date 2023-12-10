//To find sum of prime numbers between 1 to N
#include<stdio.h>
void main(){
	int i,j,n,sum = 0,isPrime;
	printf("Enter the value of n: ");
	scanf("%d",&n);

	for(i = 2;i<=n; i++){
		isPrime = 1;
		for(j=2;j<i;j++){
			if(i%j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1)
			sum = sum + i;
	}
	printf("Sum of primes from 1 to n = %d\n",sum);
}
