#include<stdio.h>
void main()
{
	int a[20],b[20],i,n,k,j=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Eneter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter a number to check for divisibility: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]%k==0){
			b[j]=a[i];
			j++;
		}
	}
	printf("The sub array is: ");
	for(j=0;j<n;j++)
	{
		if(b[j]!=0){
			printf("%d ",b[j]);
		}
	}
}

