#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,t;
	printf("Enter a value: ");
	scanf("%d",&n);
	if (n>2)
	{
		for(i=0;i<n-2;i++)
		{
			t=b;
			b=a+b;
			a=t;
		}
		printf("%d",b);
	}
	else if(n==1) printf("1");
	else printf("0");
	return 0;
}
