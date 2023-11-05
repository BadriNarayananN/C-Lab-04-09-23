#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of matrix: ");
	scanf("%d",&n);
	
	int a[n][n],i,j,c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if (a[i][i]==1) c+=1;
				else c=0;
			}
			else 
			{
				if (a[i][j]==0) c+=1;
				else c=0;
			}
		}
	}
	if (c==n*n) printf("Identity Matrix");
	else printf("Not an Identity Matix");
	return 0;
}
