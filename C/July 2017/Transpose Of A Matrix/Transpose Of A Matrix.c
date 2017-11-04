#include <stdio.h>
int main()
{   int A[100][100];
int i,j,N,M;
scanf("%d ",&N);
scanf("%d",&M);
for(i=0;i<N;i++)
{for(j=0;j<M;j++)
{

scanf("%d ",&A[i][j]);
}
}
for(i=0;i<M;i++)
{for(j=0;j<N;j++)
{
printf("%d ",A[j][i]);
}

printf("\n");

}
return 0;
}