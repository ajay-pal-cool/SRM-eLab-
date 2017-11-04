/*
========================================================
Author			:	Pranshu Chittora
Program Name	:	

========================================================

 */
#include <stdio.h>
#include <stdlib.h>

void clrscr()
{
	system("@cls||clear");
}

void apFunction(int a,int d ,int n)
{	int i,val;
	for (i = 0; i < n; i++)
	{
		val=a+(i*d);
		printf("%d ",val );
	}
	

}
int main ()
{
	int a,d,n,fir,sec;
	char resp;
	int i;
	do
	
	{	for (i = 0; i < 30; i++)
		{
			printf("==");
		}

		printf("\nEnter the First term of the series :   ");
		scanf("%d",&fir);
		printf("\nEnter the Second term of the series :  ");
		scanf("%d",&sec);
		printf("\nEnter the total number of terms to be outputed of this series : ");
		scanf("%d",&n);
		
		a=fir;
		d=sec-fir;

		apFunction(a,d,n);
		printf("\n\aWanna try again (Y/N) :  ");
		scanf(" %c",&resp);
		printf("\n\n");
		clrscr();

	}while(resp=='y' || resp=='Y');

	return 0;




}