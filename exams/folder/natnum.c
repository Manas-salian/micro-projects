#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter the number of natural numbers: ");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
}

#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter the number of natural numbers: ");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}while(i<=n);
}
