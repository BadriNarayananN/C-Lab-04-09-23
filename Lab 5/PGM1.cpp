#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value: "); scanf("%d",&n);
	int a[n],i,j;
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	int min,max,avg,s=0;
	min=a[0];
	for (i=1;i<n;i++)
		if (min>a[i]) min=a[i];
	max=a[0];
	for (i=1;i<n;i++)
		if (max<a[i]) max=a[i];
	for (i=0;i<n;i++)
	s+=a[i];
	avg=s/n;
	printf("Maximum value: %d\n",max);
	printf("Minimum value: %d\n",min);
	printf("Average value: %d\n",avg);
	return 0;
}
