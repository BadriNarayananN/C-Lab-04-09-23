#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c)
		printf("Equilateral traingle");
	else if (a==b || b==c ||c==a)
		printf("Isosceles triangle");
	else
		printf("Scalene triangle");
	return 0;
}
