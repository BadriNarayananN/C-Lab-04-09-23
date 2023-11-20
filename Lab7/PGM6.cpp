#include<stdio.h>
struct customer
{
	int acc_no;
	char name[51];
	int bal;
}bank[5];

int transaction(int account_no, int req, int amt, struct customer)
{
	if (req==0)
	{
		int dep;
		printf("Enter amount to be deposited: ");
		scanf("%d",&dep);
		for (int i=0;i<5;i++)
		{
			if(bank[i].acc_no==account_no)
			{
				bank[i].bal+=dep;
				printf("The new balance is %d",bank[i].bal);
			}
		}
	}
	else
	{
		int wd;
		printf("Enter withdraw amount: ");
		scanf("%d",&wd);
		for (int i=0;i<5;i++)
		{
			if (bank[i].acc_no==account_no)
			{
				if (bank[i].bal>wd)
				{
					bank[i].bal-=wd;
					printf("Valid Transcation");
					printf("New balance is %d",bank[i].bal);
				}
				else
				{
					printf("Invalid Transcation");
				}
			}
		}
	}
}

int main()
{
	int an,r,a;
	for(int i=0;i<5;i++)
		scanf("%d %s %d",&bank[i].acc_no,bank[i].name,&bank[i].bal);
	printf("Enter account number for transaction: ");
	scanf("%d",&an);
	printf("Enter rquest type('0' for deposit and '1' for withdrawal): ");
	scanf("%d",&r);
	printf("Enter transaction amount: ");
	scanf("%d",&a);
	transaction(an,r,a,customer);
	return 0;
}
