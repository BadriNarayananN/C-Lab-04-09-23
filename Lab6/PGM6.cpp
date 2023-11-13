#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of string: ");
	scanf("%d",&n);
	char s1[n+1];
	printf("Enter a string: ");
	scanf("%s",s1);
	s1[n]='\0';
	printf("Enter character to be found: ");
	char ch;
	scanf("%c",&ch);
	int k=0,i=0;
	while (s1[i]!='\0')
	{
		if (s1[i]==ch)
		{
			k=1;
			break;
		}
		i++;
	}
	if(k==1)
	printf("The position of character in string is: %d",i+1);
	else printf("The character is not in the string");
}
