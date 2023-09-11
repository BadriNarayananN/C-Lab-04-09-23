#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g;
	printf("Enter marks of 5 subjects out of 100: ");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	f=(a+b+c+d+e)/500;
	g=f*100;
	printf("The percentage is %f percent",g);
	return 0;
}
