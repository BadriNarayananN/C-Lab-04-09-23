#include<stdio.h>
int main()
{
	char s1[100];
	printf("Enter a string: ");
	scanf("%[^\n]",s1);
	printf("%s",s1);
	return 0;
}
