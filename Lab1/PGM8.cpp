#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter a value in km: ");
	scanf("%f",&a);
	b=a*1000;
	c=b*100;
	d=c*10;
	printf("The value in m is %f",b);
	printf("The value in cm is %f",c);
	printf("The value in mm is %f",d);
	return 0;
}
