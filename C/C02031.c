#include<stdio.h>
int main ()
{
        int n,i,j;
        scanf("%d",&n);
        for(i=n; i>0; i--)
          {
              for(j=i-1; j<=2*i-2; j++)
                 printf("%c", j+64);
            printf("\n");
          }
}