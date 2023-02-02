#include<stdio.h>
int main ()
{
        int i,j,k,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
          printf("~");
        if(i==0 || i==n-1)
           {
               for (j=0; j<n; j++)
                 printf("*");
                printf("\n");
           }
        else
           {
               printf("*");
               for(j=1;j<n-1; j++)
                  printf(".");
                printf("*");
                printf("\n");
           }
    }
}