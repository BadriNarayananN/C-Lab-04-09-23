#include<stdio.h>
int main()
{
	int n;
	printf("Enter an even integer: "); scanf("%d",&n);
	int a[n],i,j,t;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i+=2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
