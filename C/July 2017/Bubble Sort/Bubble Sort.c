#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,i,j,swap,a[100];
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i+1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j+1];
                a[j+1]=a[j];
                a[j]=swap;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    
       return 0;
}
