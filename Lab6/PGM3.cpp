#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter length of string1: ");
	scanf("%d",&n1);
	printf("Enter length of string2: ");
	scanf("%d",&n2);
	char s1[n1+n2+2];
	printf("Enter string1: ");
	scanf("%[^\n]",s1);
	char s2[n2+1];
	printf("Enter string2: ");
	scanf("%[^\n]",s2);
	int i=0;
	while(s2[i]!='\0')
	{
		s1[n1+i]=s2[i];
		i++;
	}
	printf("%s",s1);
	return 0;
}
