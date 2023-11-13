#include<stdio.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	char s1[n+1];
	printf("Enter a string: ");
	scanf("%s",s1);
	s1[n]='\0';
	int i=0,k=0;
	while (s1[i]!='\0')
	{
		if(s1[i]==s1[n-i-1]) k++;
		i++;
	}
	if(k==n) printf("Palindrome");
	else printf("Not a palindrome");
	return 0;
}
