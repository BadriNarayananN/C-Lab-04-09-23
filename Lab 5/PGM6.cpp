#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value: "); scanf("%d",&n);
	int a[n],i,j,t,k;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Enter the value of 'k': "); scanf("%d",&k);
	printf("%dth largest is %d\n",k,a[n-k]);
	printf("%dth smallest is %d",k,a[k-1]);
	return 0;
}
