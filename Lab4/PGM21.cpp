#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	printf("Enter starting integer: ");
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		printf("%d ",k);
		k++;
		printf("\n");
	}
	
	for (i=0;i<n;i++)
	{
		k--;
		for (j=0;j<n-i;j++)
		printf("%d ",k);
		printf("\n");
	}
	return 0;
}
