#include<stdio.h>
void main(){
	int dec,bin = 0,i=1,rem;
	printf("Enter a decimal number: ");
	scanf("%d",&dec);

	while(dec!=0){
		rem = dec %2;
		dec = dec/2;
		bin = bin + rem*i;
		i=i*10;
	}
	printf("binary number is = %d\n",bin);
}