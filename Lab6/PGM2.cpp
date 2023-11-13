#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter a string: ");
	scanf("%[^\n]",s);
	
	char s1[100];
	int i=0;
	while (s[i]!='\0')
	{
		s1[i]=s[i];
		printf("%c",s1[i]);
		i++;
	}
	printf("%s",s1);
	return 0;
}
