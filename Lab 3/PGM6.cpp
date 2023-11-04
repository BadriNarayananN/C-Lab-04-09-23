#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter a value: ");
	scanf("%d",&n);
	while (n>0)
	{
		n/=10;
		s+=1;
	}
	printf("%d",s);
	return 0;
}
