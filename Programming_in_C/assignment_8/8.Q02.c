/*2. Define a structure called Account that will describe the following information:
	Account number
	Account holder name
	Balance
Using Account, declare an array Customers with 10 elements and write a program to read the information about 10 customers. 
Now develop a menu and do the following (like an ATM) as shown below:
1) The system will ask for account number first.
 ----------------------------------------
|  ENTER ACCOUNT NUMBER: __     |
 ----------------------------------------
If the account number is present in the system then show the following menu; otherwise show an error and ask to enter account number again.
 ----------------------------------
| Welcome <Cust Name>	|
| 1. Withdraw		|
| 2. Deposit		|	
| 3. Show Details with Balance	|
| 4. Exit			|
| Enter your choice: 		|
 ----------------------------------
For both withdraw and deposit ask user to enter amount to be withdrawn or deposited. In case of withdraw check that the balance should not be negative. 
*/


#include<stdio.h>
struct account
{
	int number,balance;
	char holder[100];
}customer[3];

int main()
{
	
	int i,num,m,l=3,f=0,ch;
	for(i=0;i<l;i++){
		printf("Enter customer name: ");
		scanf("%s",customer[i].holder);
		fflush(stdin);
		printf("Enter account no.: ");
		scanf("%d",&customer[i].number);
		printf("Enter account balance: ");
		scanf("%d",&customer[i].balance);
		printf("\n");
	}
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("ENTER DETAILS BELOW\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	do{
		printf("\nENTER ACCOUNT NUMBER:  ");
		scanf("%d",&num);
		for(i=0;i<l;i++){
			if(num == customer[i].number){
				f=1;
				break;
			}
		}
		if(f==0)
			printf("INVALID ACCOUNT NUMBER. TRY AGAIN....");
		else{
			do{
				printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("   WELCOME  %s",customer[i].holder);
				printf("\n< 1 > TO WITHDRAW\n< 2 > TO DEPOSIT\n< 3 > TO SHOW DETAILS WITH BALANCE\n< 4 > TO EXIT");
				printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
				printf("ENTER YOUR CHOICE: ");
				scanf("%d",&ch);
				switch(ch){
					case 1:
						printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
						printf("YOU CHOSE TO WITHDRAW MONEY\n");
						printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
						printf("ENTER AMMOUNT: ");
						scanf("%d",&m);
						if(m>customer[i].balance)
							printf("YOU HAVE INSUFFICIENT BALANCE.\n");
						else{
							customer[i].balance -= m;
							printf("MONEY WITHDRAWN SUCCESSFULLY.\nREMAINING BALANCE %d\n",customer[i].balance);
						}
						break;
					case 2:
						printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
						printf("YOU CHOSE TO DEPOSIT MONEY\n");
						printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
						printf("ENTER AMMOUNT: ");
						scanf("%d",&m);
						customer[i].balance += m;
						printf("MONEY DEPOSITED SUCCESSFULLY.\nNET BALANCE %d\n",customer[i].balance);
						break;
					case 3:
						printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
						printf("BANK DETAILS OF USER\n");
						printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
						printf("\nACCOUNT NO.\tACCOUNT HOLDER\t\tBALANCE\n");
						printf("%d\t%s\t\t\t%d\n",customer[i].number,customer[i].holder,customer[i].balance);
						break;
					case 4:
						printf("THANK YOU VISIT AGAIN");
				}
			}while(ch!=4);
		}
	}while(f==0);
}
