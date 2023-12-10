#include<stdio.h>
void main(){
	int bin,dec=0,base=1;
	printf("Enter a binary number: ");
	scanf("%d",&bin);
	while(bin > 0){
		dec = dec + (bin%10)*base;
		base = base*2;
		bin = bin/10;
	}
	printf("Decimal number is = %d\n",dec);
}