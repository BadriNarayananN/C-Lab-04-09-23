#include<stdio.h>
int main()
{
	int n,f,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n>0)
	{
		f=n%10;
		s+=f;
		n/=10;
	}
	printf("Sum of digits of the number is %d",s);
	return 0;
}
