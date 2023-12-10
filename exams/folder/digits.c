//to find number of digits using while
#include<stdio.h>
void main(){
	int num, dig=0;
	printf("enter a number: ");
	scanf("%d",&num);
	while(num>0){
		num = num /10;
		dig++;
	}
	printf("Number of digits = %d\n",dig);
}

/*
#include<stdio.h>
void main(){
	int i,num, dig=0;
	printf("enter a number: ");
	scanf("%d",&num);
	for(i = num;i > 0;i=i/10,dig++)
		dig++;
	printf("Number of digits = %d\n",dig);
}
*/