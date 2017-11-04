/*
========================================================
Author			:	Pranshu Chittora
Program Name	:	

========================================================

 */
#include <stdio.h>
#include<math.h> 
#include <stdlib.h>
int powerFx(int i,int r)
{
	int j,val;
	val=r;
	
	if (i>0)
	{


		for (j =1 ; j < i ; j++)
		{
			val=val*r;

		}

		return val;
	}
	else
		return 1;


}

void clrscr()
{
	system("@cls||clear");
}

void apFunction(int a,int r ,int n)
{	int i,val;
	for (i = 0; i < n; i++)
	{
		val=a*powerFx(i,r);
		printf("%d ",val );
	}
	

}
int main ()
{
	int a,r,n,fir,sec;
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
		r=(sec/fir);

		apFunction(a,r,n);
		printf("\n\aWanna try again (Y/N) :  ");
		scanf(" %c",&resp);
		printf("\n\n");
		clrscr();

	}while(resp=='y' || resp=='Y');

	return 0;




}