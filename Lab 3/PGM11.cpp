#include<stdio.h>
int main()
{
	int n,f,b=0,bin=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n>0)
	{
		f=n%2;
		b=b*10+f;
		n/=2;
	}
	while (b>0)
	{
		f=b%10;
		bin=bin*10+f;
		b/=10;
	}
	printf("Binary equivalent of the number is %d",bin);
	return 0;
}
