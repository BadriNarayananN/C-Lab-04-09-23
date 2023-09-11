#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("Enter a number: ");
	scanf("%f",&a);
	b=pow(a,3);
	printf("The cube of the given number is %f",b);
	return 0;
}
