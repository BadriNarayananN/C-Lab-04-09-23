#include<stdio.h>
int main()
{
	float a,b,c;
	int d;
	printf("Enter two decimal numbers: ");
	scanf("%f %f",&a, &b);
	c=a*b;
	d=a*b;
	printf("The product in float is %f",c);
	printf("The product in integer is %d",d);
	return 0;
}
