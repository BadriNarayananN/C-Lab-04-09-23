#include<stdio.h>
int main()
{
	int n,f,rev=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n>0)
	{
		f=n%10;
		rev=rev*10+f;
		n/=10;
	}
	printf("Reversed number: %d",rev);
	return 0;
}
