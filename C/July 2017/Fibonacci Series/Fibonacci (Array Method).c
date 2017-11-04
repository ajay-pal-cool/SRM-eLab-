/*
=================================================
Author 			:	Pranshu Chittora
Program Name 	:	Fibonacci Series Array Method
Date			:	09 July 2017
___________________________________
		SPECIAL FEATURES
*Implication of array method 
*Some what limited
		
=================================================
 */
#include <stdio.h>
int main ()
{	
	int i,j,n=10;
	int x,y;

	int a[1000]={0,1,1,2};
	do
	{	
		printf("Enter the number of desired terms in the series  :  ");
		scanf("%d",&n);
		
	} while (n<=0);

	for (i=0; i < n; i++)
	{

		x=a[i+1];
		y=a[i+2];

		a[i+3]=x+y;
		printf("%d\n",a[i] );

	}


	return 0;
}