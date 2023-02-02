#include<stdio.h>
int main ()
{
    int n,i,dau,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
       {
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