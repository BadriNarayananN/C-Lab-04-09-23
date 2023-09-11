#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The numbers in swappped order are %d and %d",a,b);
	return 0;
}
