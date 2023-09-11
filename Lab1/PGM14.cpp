#include<stdio.h>
int main()
{
	float basic,da,hra,sal;
	int r;
	printf("Enter the basic salary: ");
	scanf("%f", &basic);
	printf("Enter tier of your region: ");
	scanf("%d",&r);
	da=basic*0.2;
	if (r==1)
		hra=basic*0.3;
	else if (r==2)
		hra=basic*0.25;
	else if (r==3)
		hra=basic*0.2;
	else
		hra=basic*0.15;
	sal=basic+da+hra;
	printf("The salary of the employee is %f",sal);
	return 0;
}
