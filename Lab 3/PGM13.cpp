#include<stdio.h>
#include<math.h>
int main()
{
	int n,s=0,first,last,g;
	printf("Enter a value: ");
	scanf("%d",&n);
	g=n;
	while (n>0)
	{
		n/=10;
		s+=1;
	}
	last=g%10;
	first=g/(pow(10,s-1));
	printf("Sum of first and last digit is %d",first+last);
	return 0;
}
