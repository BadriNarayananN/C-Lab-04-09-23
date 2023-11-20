#include<stdio.h>
int avg_array(int,int);
int avg_array(int a[],int n)
{
	int s=0; int i;
	for(i=0;i<n;i++)
	s+=a[i];
	return (float)s/n;
}
int main()
{
	int l; float avg;
	printf("Enter length of array: ");
	scanf("%d",&l);
	int b[l]; int i;
	printf("Enter array elements: ");
	for(i=0;i<l;i++)
	scanf("%d",&b[i]);
	avg=avg_array(b,l);
	printf("Average is %f",avg);
	return 0;
}

