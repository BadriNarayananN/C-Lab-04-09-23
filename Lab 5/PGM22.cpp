#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter number of rows: "); scanf("%d",&r);
	printf("Enter number of columns: "); scanf("%d",&c);
	int a[r][c],b[r][c],i,j;
	printf("Enter values for matrix A\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	printf("Enter values for matrix B\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&b[i][j]);
	printf("Sum of matrices is\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	printf("%d ",a[i][j]+b[i][j]);
	printf("\n");	
	printf("Difference of matrices is\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	printf("%d ",a[i][j]-b[i][j]);
	return 0;
}
