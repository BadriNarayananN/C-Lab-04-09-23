#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,n,si,ci;
	printf("Enter principal: ");
	scanf("%f",&p);
	printf("Enter rate of interest(in percent): ");
	scanf("%f",&r);
	printf("Enter time period: ");
	scanf("%f",&t);
	printf("Enter number of times interest applied per time period: ");
	scanf("%f",&n);
	si=(p*r*t)/100;
	ci=(p*(pow((1+(r/(n*100))),n*t)))-p;
	printf("Simple Interest = %f\n",si);
	printf("Compound Interest = %f",ci);
	return 0;
}
