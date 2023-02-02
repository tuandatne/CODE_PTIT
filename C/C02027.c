#include<stdio.h>
int main ()
{
    int mang[100] [100];
    int i,j,n,dau=96;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      {
          if(i%2==0)
            {
              for(j=i; j>=1; j--)
                 {
                     dau=dau+1;
                     mang[i] [j]=dau;
                 }
            }
          else
          {
                  for(j=1; j<=i; j++)
                      {
                     dau=dau+1;
                     mang[i] [j]=dau;
                       }
          }
      }
    for(i=1;i<=n; i++)
     {
         for(j=1; j<=i; j++)
          printf("%c ",mang[i] [j]);
        printf("\n");
     }
}