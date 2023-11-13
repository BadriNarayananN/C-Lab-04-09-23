#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter length of string 1: ");
	scanf("%d",&n1);
	char s1[n1+1];
	printf("Enter string 1: ");
	scanf("%s",s1);
	s1[n1]='\0';
	printf("Enter length of string 2: ");
	scanf("%d",&n2);
	char s2[n2+1];
	printf("Enter string 2: ");
	scanf("%s",s2);
	s2[n2]='\0';
	int i=0,k=0;
	if (n1==n2)
	{
		while (s1[i]!='\0')
		{
			if(s1[i]==s2[i]) k+=1;
			i++;
		}
		if (k==n1) printf("Equal");
		else printf("Not equal");
	}
	else printf("Not equal");
	return 0;
}
