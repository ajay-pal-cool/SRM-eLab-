/*
=================================
Chittora Was Here
=================================
*/
#include <stdio.h>
#define N 10 
int main ()

{	int a[N],i;
	printf("Enter %d numbers (followed by space & then press Enter key):  ",N );
	for (i = 0; i < N; i++)
	{
		scanf(" %d ",&a[i]);
	}
	for (i = N-1; i >=0 ; i--)
	{
		printf("%d ",a[i] );
	}

	return 0;


}
