#include<stdio.h>
int main()
{
	int u;
	float a;
	printf("Enter the number of units: ");
	scanf("%d",&u);
	if (u>=0 && u<=100)
		a=u*2;
	else if (u>=101 && u <=200)
		a=u*2.5;
	else if (u>=201 && u<=300)
		a=u*3;
	else
		a=u*5;
	printf("The electricity bill is %f",a);
	return 0;
}
