#include<stdio.h>
int main()
{
	int n;
	printf("Enter length of string: ");
	scanf("%d",&n);
	char s1[n+2];
	printf("Enter a string: ");
	scanf("%s",s1);
	s1[n+1]='\0';
	int p; char s[2];
	printf("Enter element to be inseted: ");
	scanf("%s",s);
	s[1]='\0';
	printf("Enter position of element to be inserted: ");
	scanf("%d",&p);
	int i;
	for(i=n-1;i>=p-1;i--)
	{
		s1[i+1]=s1[i];
	}
	s1[p-1]=s[0];
	printf("%s",s1);
	return 0;
}
