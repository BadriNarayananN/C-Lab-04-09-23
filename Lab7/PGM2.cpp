#include<stdio.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	char *p1[n+1];
	printf("Enter the string: ");
	scanf("%s",p1);
	char t;
	for(int i=0;i<n/2;i++)
	{
		t=*p1[i];
		*p1[i]=*p1[n-i-1];
		*p1[n-i-1]=t;
	}
	printf("Reversed string is %s",*p1);
	return 0;
}
