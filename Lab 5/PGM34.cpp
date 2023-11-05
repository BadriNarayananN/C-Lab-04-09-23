#include<stdio.h>
int main()
{
	int n;
	printf("Enter an even number: ");
	scanf("%d",&n);
	if (n%2==0)
	{
		int a[n],i,j,s1=0,s2=0;
		for (i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		for (i=0;i<n/2;i++)
			s1+=a[i];
		for (j=n-1;j>=n/2;j--)
			s2+=a[j];
		if (s1==s2)
			printf("0");
		else if (s1>s2)
			printf("%d must be added to the right half",s1-s2);
		else
			printf("%d must be added to the left half",s2-s1);	
	}
	else
		printf("Invalid Input");
	return 0;
}
