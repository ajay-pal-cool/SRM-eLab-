#include <stdio.h>
#include <stdlib.h>

void clrscr()
{
	system("@cls||clear");
}

void apFunction(int a,int d ,int m,int n)
{	int i,val;
	for (i = m; i <= n; i++)
	{
		val=a+((m-1)*d);
		printf("%d  ",val );
		m++;
	}


}
int main ()
{
	int a,d,n,m;
	char resp;
	int i;
	do
	
	{	for (i = 0; i < 30; i++)
		{
			printf("==");
		}

		printf("\nEnter the First term(a) of the series :   ");
		scanf("%d",&a);
		printf("\nEnter the Common difference(d) between two consecutive terms :  ");
		scanf("%d",&d);
		printf("\nEnter the Lower limit of the output (from term):  ");
		scanf("%d",&m);
		printf("\nEnter the Upper Limit of the output (to term) :  ");
		scanf("%d",&n);
		apFunction(a,d,m,n);
		printf("\n\aWanna try again (Y/N) :  ");
		scanf(" %c",&resp);
		printf("\n\n");
		clrscr();

	}while(resp=='y' || resp=='Y');

	return 0;




}