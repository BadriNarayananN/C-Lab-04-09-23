#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year: ");
	scanf("%d",&y);
	if (y%4==0 && (y%100!=0 || y%400==0))
		printf("%d is a leap Year",y);
	else
		printf("%d is not a leap Year",y);
	return 0;
}
