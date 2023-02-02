#include<stdio.h>
int main ()
{
    int i,j,n,tg,a[100][100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      {
        for(j=1; j<=n; j++)
          scanf("%d",&a[i] [j]);
      }
    for(i=1;i<=n; i++)
      {
          tg=a[i][i];
          a[i][i]=a[i][n-i+1];
          a[i][n-i+1]=tg;
      }
    for(i=1; i<=n; i++)
      {
          for(j=1; j<=n; j++)
            printf("%d ",a[i] [j]);
        printf("\n");
      }
}