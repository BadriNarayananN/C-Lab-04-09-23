#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a, &b, &c);
	if (a>b && a>c )
		printf("%d is great",a);
	else if (b>c)
		printf("%d is great",b);
	else
		printf("%d is great",c);
	return 0;
}
