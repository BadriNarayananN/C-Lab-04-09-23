#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter number of rows: "); scanf("%d",&r);
	printf("Enter number of columns: "); scanf("%d",&c);
	int a[r][c],i,j;
	printf("Enter values for matrix\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	int b[c][r];
	for (i=0;i<c;i++)
	for (j=0;j<r;j++)
	b[i][j]=a[j][i];
	for(i=0;i<c;i++)
	for(j=0;j<r;j++)
	printf("%d ",b[i][j]);
	return 0;
}
