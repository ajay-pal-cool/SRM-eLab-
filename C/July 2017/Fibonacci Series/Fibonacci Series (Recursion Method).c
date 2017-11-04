/*
===============================================
Author			:	Pranshu Chittora
Program Name 	:	Fibonacci Series Resursion Method
Date			: 	09 July 2017
____________________________________
			FEATURES
*Functional Programming
*Recurcive			

===============================================
 */
#include <stdio.h>
int series();

int main ()

{
	int x,y;
	int term=10;
	x=0;
	y=1;
	do{
		printf("Enter the desired no. of terms  : ");
		scanf("%d",&term);
	}while(term<=0);
	printf("%d\n%d\n",x,y );

	series(x,y,term);
	return 0;
}

int series(int a,int b,int n)
{	
	int c;
	c=a+b;
	printf("%d\n", c);

	if (n>3){
		a=b;
		b=c;
		n=n-1;
		series(a,b,n);
	}
	return 0;
}