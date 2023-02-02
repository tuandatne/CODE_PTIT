#include<stdio.h>
int main ()
{
    int n,i,j;
    scanf("%d",&n);
    printf("A\n");
    for(i=2; i<=n; i++)
      {
          int dau=i+64;
          printf("%c ",dau);
          int kc=n-1;
          for(j=2; j<=i; j++)
          {
              dau=dau+kc;
              printf("%c ",dau);
              kc--;
          }
        printf("\n");

      }
}