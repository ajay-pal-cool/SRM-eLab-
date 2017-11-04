/*
    input - n, sym
    
    output - n*n


    n = 3, sym = *
    
    * * *
    * * *
    * * *
    
    
    n=3
    
    *
    * *
    * * *
    
    * * *
    * *
    *
    
      *
     * *
    * * *
    
    
    * * *
      * *
        *
        
        *
      * *
    * * *
    
*/
#include <stdio.h>

int main()
{
    int n = 4;
    int i,j,k;
    char sym = '$';
    
    for(i=0; i<n; i++){
        for( j=0;j<i;j++){
            printf("%c ",sym);
        }
        printf("\n");
    }



    /**/
    printf("\n");
    for ( i =0 ; i < n; )

        {   i=i+1;
            printf("\n");

            for (j = i; j <=n; )
            {
                printf("%c ",sym );
                j=j+1;
            }
        }



    /**/
        printf("\n");

        for (i =0 ; i < n; i++)
            {   printf("\n");
        for (j = i;  j>0 ; j--)
            printf("   ");
        for (k =i; k < n; k++)
            printf(" %c ",sym );
    }


/* */
    printf("\n");

    for (i =0 ; i < n; i++)
        {   printf("\n");
    for (j = i+1;  j<n ; j++)
        printf("  ");
    for (k=0     ; k<=i    ;    k++)
    {
        printf("%c ", sym);
    }

    

}


/* */
printf("\n");
for (i = 0; i < n; i++)
{
 printf("\n");
 for(j=i ; j<n  ; j++)
 {
    printf(" ");

}
for(k=0 ; k<=i   ; k++)
{
    printf("%c ",sym );

}

}





return 0;
}
