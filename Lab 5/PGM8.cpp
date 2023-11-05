#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value: "); scanf("%d",&n);
	int a[n],i,j,c,l=1;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int b[n];
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
	}
	for(i=0;i<l;i++)
	printf("%d ",b[i]);
	return 0;
}
