#include<stdio.h>
void main(){
	int i,j,r,c,a[20][20];
	printf("Enter the row size and column size of the array:\t");
	scanf("%d%d",&r,&c);
	printf("Enter the array elements:\n");
	for (i = 0; i < r; i++){
		for (j = 0;j<c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The array is:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}