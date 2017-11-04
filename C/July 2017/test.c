#include <stdio.h>

int main()
{
    char ser[200];
    int i;
    int len;
    scanf("%d",len);
    len-=1;
    for(i=0;i<=len;i++)
    {
        scanf(" %d ",&ser[i]);
    }
    printf("%d",ser[2]);
    
    
    
    
    
    return 0;
}
