#include<stdio.h>
int main()
{
	float a,b,c,d,e,p;
	printf("Enter marks of 5 subjects out of 100: ");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	p=((a+b+c+d+e)/500)*100;
	printf("The percentage is %f \n",p);
	if (p>=90)
		printf("Grade A");
	else if (p>=80 and p<90)
		printf("Grade B");
	else if (p>=70 and p<80)
		printf("Grade C");
	else if (p>=60 and p<70)
		printf("Grade D");
	else if (p>=40 and p<60)
		printf("Grade E");
	else
		printf("Grade F");
	return 0;
}
