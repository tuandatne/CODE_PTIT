#include<stdio.h>
int main ()
{
    int n,j,i,dau;
    scanf("%d",&n);
    for(i=0; i<n; i++)
      {
          printf("@");
          dau=64;
          for(j=0; j<i; j++)
             {
                 dau=dau+2;
                 printf("%c",dau);
             }
        for(j=i;j<=i*2-2; j++ )
          {
              dau=dau-2;
              printf("%c",dau);
          }
      if (i!=0)  printf("@");
        printf("\n");
      }
}