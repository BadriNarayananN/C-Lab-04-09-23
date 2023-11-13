#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter a string: ");
	scanf("%[^\n]",s);
	int i=0,l=0;
	while (s[i]!='\0')
	{
		l+=1;
		i++;
	}
	printf("%d",l);
	return 0;
}
