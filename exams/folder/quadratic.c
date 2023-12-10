#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2,real,img;
	printf("Enter the coefficients :\n");
	scanf("%f%f%f",&a,&b,&c);
	d = b*b-4*a*c;
	if(d == 0){
		r1 = -b/(2*a);
		r2 = r1;
		printf("The roots are real and equal\n");

		printf("root 1 = %f ",r1);
		printf("root 2 = %f ",r2);
	}
	else if(d > 0){
		r1 = (-b+sqrt(d))/(2*a);
		r2 = (-b-sqrt(d))/(2*a);
		printf("The roots are real and distinct\n");
		printf("root 1 = %f ",r1);
		printf("root 2 = %f ",r2);
	}
	else{
		real = -b/(2*a);
		img = sqrt(fabs(d))/(2*a);
		printf("Complex roots\n");
		printf("Root1 = %f +i %f ",real,img);
		printf("Root2 = %f -i %f ",real,img);
	}
}