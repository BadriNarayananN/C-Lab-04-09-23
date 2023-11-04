#include<stdio.h>
int main()
{
	int n,f,g,rev=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	g=n;
	while (n>0)
	{
		f=n%10;
		rev=rev*10+f;
		n/=10;
	}
	if(g==rev) printf("The number is a palindrome");
	else printf("The number is not a palindrome");
	return 0;
}
