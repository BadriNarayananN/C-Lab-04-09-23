#include<stdio.h>
#include<math.h>
int main()
{
	int n,f,dec=0,i=0;
	printf("Enter a binary number: ");
	scanf("%d",&n);
	while (n>0)
	{
		f=n%10;
		dec+=f*(pow(2,i));
		n/=10;
		i++;
	}
	printf("Decimal equivalent is %d",dec);
	return 0;
}
