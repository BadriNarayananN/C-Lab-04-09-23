#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	c=a;
	a=b;
	b=c;
	printf("The numbers in swapped order are %d and %d",a,b);
	return 0;
}
