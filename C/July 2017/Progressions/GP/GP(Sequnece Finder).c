#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b,r,n,val,i;
	char resp;
	do
	{
		printf("\n Enter the First term of the GP : ");
		scanf("%d",&a);
		printf("\n Enter the Second term of the GP : ");
		scanf("%d",&b);
		printf("\n Enter the total number of terms to be outputed : ");
		scanf("%d",&n);
		r=b/a;

		for ( i = 0; i < n; i++)
		{
			val=a*pow(r,i);
			printf("%d  ",val );
		}
		printf("\n\n\tWanna try again (Y/N) : ");
		scanf(" %c",&resp);
	}while(resp=='y' || resp=='Y');
	printf("\n\tThanks for staying tuned :D :P\n\n ");

	return 0;
}