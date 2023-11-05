#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of matrix: ");
	scanf("%d",&n);
	int a[n][n],b[n][n],i,j,k;
	printf("Enter values for matrix A\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	printf("Enter values for matrix B\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&b[i][j]);
	
	printf("The product is\n");
	int c[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	printf("%d ",c[i][j]);
	return 0;
}
