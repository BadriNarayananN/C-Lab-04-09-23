#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value: "); scanf("%d",&n);
	int a[n],i,j,c,l=1,k=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int b[n],g[n];
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		c=0;
		for(j=0;j<l;j++)
		{
			if (a[i]!=b[j]) c+=1;
		}
		if (c==l) 
		{
		b[l]=a[i];
		l++;
		}
		if (c!=l)
		{
			g[k]=c;
			k++;
		}
	}
	for(i=0;i<k;i++)
	printf("%d ",g[i]);
	return 0;
}
