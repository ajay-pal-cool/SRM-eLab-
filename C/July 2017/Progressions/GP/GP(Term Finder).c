#include <stdio.h>
#include <math.h>

int main()
{
	int fir,sec,n,r,val;
	char resp;
	printf("\nEnter the First term  :  ");
	scanf("%d",&fir);
	printf("\nEnter the Second term  :  ");
	scanf("%d",&sec);
	printf("\nWhich term you want to find  :  ");
	scanf("%d",&n);
	r=sec/fir;
	val=fir*pow(r,(n-1));
	printf("\n%d",val );
	return 0; 


}















	