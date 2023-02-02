#include<stdio.h>
int main ()
{
    int n,i,dau,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
       {
        for(j=1; j<=n-i; j++)
          printf("~");
             dau=2;
           printf("%d",dau);
           for(j=2; j<=i; j++)
             {
                 dau=dau+2;
                 printf("%d",dau);
             }
        for(int j=i+1; j<=i*2-1; j++)
           {
               dau=dau-2;
               printf("%d",dau);

           }
        printf("\n");
       }
}