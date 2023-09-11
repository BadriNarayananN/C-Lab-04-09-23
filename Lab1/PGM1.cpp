#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("The sum of the two numbers is %d",c);
	printf("The differnce of the two numbers is %d",d);
	printf("The product of the two numbers is %d",e);
	printf("The division of the two numbers is %d",f);
	return 0;
}
