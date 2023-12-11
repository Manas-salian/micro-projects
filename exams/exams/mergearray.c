#include<stdio.h>
void main(){
	int a[20],b[20],c[20],n1,n2,N,i;
	printf("Enter the size of first array: ");
	scanf("%d",&n1);
	printf("Enter array1 elements: ");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);

	printf("Enter the size of second array: ");
	scanf("%d",&n2);
	printf("Enter array2 elements: ");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);

	for(i=0;i<n1;i++)
		c[i]=a[i];
	for(i=0;i<n2;i++)
		c[n1+i]=b[i];
	
	N=n1+n2;

	printf("Merged array is: ");
	for(i=0;i<N;i++)
		printf("%d ",c[i]);
}
