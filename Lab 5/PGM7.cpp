#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value: "); scanf("%d",&n);
	int a[n],i,j,t,k,s=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the value to be checked: "); scanf("%d",&k);
	for (i=0;i<n;i++)
		if(a[i]==k) s+=1;
	printf("%d",s);
	return 0;
}
