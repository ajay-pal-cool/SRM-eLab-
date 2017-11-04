/*
===============================================================
Functioning	: Generates math tables for any number till any number , infinite times
Author		: PRANSHU CHITTORA
Date		: 19-MAY-2017
_______________________________________
Function
- Generates tables.
- Looping is enabled
- UI improved by \n & \t
===============================================================
 */
#include <stdio.h>
int main(void)
{	int tab, till, x;
	char an;



	do {
		printf("\nP__R__O__C__E__S__S________B___E___G__I__N__S________H__E__R__E_\n");
		printf("\n\nEnter the number of which you want to generate table: ");
		scanf("%d", &tab);
		printf("\nTill what number you want table : ");
		scanf("%d", &till);
		printf("\n\n\n");
		x=0;



		while (x <= till)
		{
			printf("\t\t\t\t\t\t%d x %d   = %d\n", tab, x, tab * x );
			x++;

		}

		printf("\nDo you want to try one more time (y/n) : ");

		scanf(" %c", &an);

		x = 0;
		


	} while (an == 'y' || an=='Y');
	if (an != 'y')
	{
		printf("\n\n\t\t\t\t\tTHANK YOU FOR STAYING TUNED\n");


	}






	return 0x000;

}