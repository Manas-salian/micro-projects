#include<stdio.h>
void main(){
	int space,r,c,coef=1;
	for(r=0;r<4;r++){
		for(space=1;space<=4-r;space++){
			printf("  ");
		}
		for(c=0;c<=r;c++){
			if(r==0||c==0)
				coef=1;
			else{
				coef =coef*(r- c +1)/c;
			}
			printf("%4d",coef);
		}
		printf("\n");
	}
}