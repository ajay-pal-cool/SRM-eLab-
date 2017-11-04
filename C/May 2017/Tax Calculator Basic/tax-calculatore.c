/*
==================================================================================
PROGRAM IS BUILD CORRECTLY BUT EXCEDING COMPILER INTEGER LIMIT WORKS NOT PROPERLY |
ENTER SALARY=SALARY/100  (eg. sla=800,000 then type 8,000)
Function		:	Tax Calculator Indian Version								  |
Author			:	Pranshu Chittora											  |
Date			:	19 May 2017													  |
__________________________________________________________________
Features:
-Tax Amt calculator.
-All data types are flot so precise decimal calculation is done.



_______________________________ :) :P ____________________________________




==============================================================================
 */
#include <stdio.h>
int main()
{
	float sal;
	float tax;
	printf("\n========================This a tax calculator program for Indian Taxation (v1.0)2017========================\n");
	printf("\n\n\n\t\t\t\t     NOTE : TYPE ACTUAL AMOUNT=AMOUNT/100 ");
	printf("\n\n\n\n\t\t\t\tEnter your annual earning (ex. 8802) : Rs ");
	scanf("%f", &sal);
	/*Un-comment this to check any loop holes :(*/
	/*printf("%.2f", sal );*/
	printf("\n\n\n");

	if (sal < 2500)
	{
		printf("\n\t\t\t\tTotal Tax amount : Rs 0/-\n");
		printf("\n\t\t\t\tU are not contributing in nation development\n");
	}
	else if (sal >= 2500 && sal < 5000)
	{

		tax = sal * 5;
		tax = tax / 100;
		printf("\n\t\t\t\t\tYour tax amount is : Rs %.2f", tax);


	}




	else if ( sal >= 5000 && 10000 > sal )
	{
		tax = sal * 20;
		tax = tax / 100;
		printf("\n\n\n\n\n\t\t\t\t\tYour tax amount is : Rs %.2f", tax);




	}

	else if (sal >= 10000)
	{

		tax = sal * 30;
		tax = tax / 100;

		printf("\n\t\t\t\t\tYour tax amount is : Rs %.2f", tax);


	}
		

return 0;


}