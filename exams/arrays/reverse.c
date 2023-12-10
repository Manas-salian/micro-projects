#include<stdio.h>
void main(){
	int a[10],i,n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array in reverse order is:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}

}