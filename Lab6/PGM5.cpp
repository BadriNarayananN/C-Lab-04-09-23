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
	char s2[n+1];
	int i=0;
	while (s1[i]!='\0')
	{
		s2[i]=s1[n-i-1];
		i++;
	}
	s2[n]='\0';
	printf("%s",s2);
	return 0;
}
