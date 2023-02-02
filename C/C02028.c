#include<stdio.h>
int main ()
{
        int i,j,n;
        scanf("%d",&n);
        int mang[100];
        for(i=1; i<=n; i++)
          mang[i]=1+(i-1)*2;
        for(i=1; i<=n; i++)
          {
              for(j=i; j<=n; j++)
                printf("%c", mang[j]+64);
              printf("\n");
          }
}