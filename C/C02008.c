#include<stdio.h>
int main ()
{
        int i,j,n;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            if (i==n || i==1)
              for(j=1; j<=i; j++)
                  printf("*");
            else
               {
                   printf("*");
                   for(j=1; j<=i-2;j++)
                     printf(".");
                   printf("*");
               }
            printf("\n");
        }
}