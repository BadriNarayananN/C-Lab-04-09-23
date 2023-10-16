#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		{
		if (j==i)
		printf("%d ",i+1);
		else
		printf("%d*",i+1);
		}
		printf("\n");
	}
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
		if (j==n-i-1)
		printf("%d ",n-i);
		else
		printf("%d*",n-i);
		}
		printf("\n");
	}
	return 0;
}
