#include <stdio.h>
int main()
{
	int a,d,n,val;
	printf("\tEnter the first term :  ");
	scanf("%d",&a);
	printf("\n\tEnter the common difference  :  ");
	scanf("%d",&d);
	printf("\n\tEnter the term , whose value is needed to be printed   :  ");
	scanf("%d",&n);

	val=a+((n-1)*d);
	printf("\a\n\t%dth term of the series is  :  %d\n",n,val);
	int main();


	return 0;
}