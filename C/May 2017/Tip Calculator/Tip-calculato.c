/*
===============================================================
Functioning	: Basic Tip calculator
Author		: Pranshu Chittora
Date		: 19 May 2017
_______________________________________
Function
-Tip calculator
-Input billing amount & % of which u want to give it as a tip.
-Final amount will appear which u spent.

===============================================================
 */
#include <stdio.h>
int main()
{

	int ba, tip, fa;
	printf("Enter Bill Amount : Rs ");
	scanf("%d", &ba);


	printf("\n\nHow many %% tip you want to give : ");
	scanf("%d", &tip);


	fa = ((tip * ba) / 100) + ba;

	printf("\n\nPlease leave Rs %d on the table ", fa );
	printf("\n\nThank You ! Visit Again :)\n\n");
	return 0;

}