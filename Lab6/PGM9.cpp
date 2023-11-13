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
	char v[]="aeiou";
	char v1[6]={'\0','\0','\0','\0','\0','\0'};
	int i=0;
	while(s1[i]!='\0')
	{
		for(int j=0;j<5;j++)
		{
			if (s1[i]==v[j]) v1[j]=s1[i];
		}
		i++;
	}
	for(i=0;i<5;i++)
	{
		if(v1[i]!=0) printf("%c\n",v1[i]);
	}
	return 0;
}
