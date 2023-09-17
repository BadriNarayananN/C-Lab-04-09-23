#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter date, month and year: ");
	scanf("%d%d%d",&d,&m,&y);
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
		{
			if(d==31)
				printf("01 %d %d",m+1,y);
			else if (d>=1 && d<=30)
				printf("%d %d %d",d+1,m,y);
			else
				printf("Invalid input");
		}
	else if (m==12)
		{
			if(d==31)
				printf("01 01 %d",y+1);
			else if (d>=1 && d<=30)
				printf("%d %d %d",d+1,m,y);
			else
				printf("Invalid input");
		}
	else if (m==4 || m==6 || m==9 || m==11)
		{
			if(d==30)
				printf("01 %d %d",m+1,y);
			else if (d>=1 && d<=29)
				printf("%d %d %d",d+1,m,y);
			else
				printf("Invalid input");
		}
	else if (m==02)
		{
			if (y%4==0 && (y%100!=0 || y%400==0))
				{
					if(d==29)
						printf("01 %d %d",m+1,y);
					else if (d>=1 && d<=28)
						printf("%d %d %d",d+1,m,y);
					else
						printf("Invalid input");
				}		
			else if (y%4!=0 && (y%100!=0 || y%400==0))
				{
					if(d==28)
						printf("01 %d %d",m+1,y);
					else if (d>=1 && d<=27)
						printf("%d %d %d",d+1,m,y);
					else
						printf("Invalid input");
				}
			else
				printf("Invalid Input");
		}
	else
		printf("Invalid Input");
	return 0;
}
