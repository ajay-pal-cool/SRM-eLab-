/*
===================================================
Author		:	Pranshu Chittora
Program Name :	Fibonacci Series Low Memory Ussage
Date		:	9 July 2017
____________________________________________
SPECIAL FEATURES:-
* User Input
* Low memory ussage

===================================================
 */
	#include <stdio.h>
	int main ()
	{
		int a,b,c,n,i;
		a=0; b=1; c=a+b;
		do
		{
			printf("Enter the no. of terms :   "); scanf("%d",&n);
		}while(n<=0);

		printf("%d\n%d\n%d\n",a,b,c );
		
		for(i=3;i<n;i++)
		{	
			a=b; b=c; c=a+b; printf("%d\n",c );
		}
		return 0;
	}