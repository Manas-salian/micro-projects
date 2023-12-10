//demonstration of continue
#include<stdio.h>
void main(){
	int i;
	for(i=1;i<5;i++){
		if(i==2){
			printf("Ching Chong \n");
			continue;
		}
		printf("%d \n",i);
	}

}