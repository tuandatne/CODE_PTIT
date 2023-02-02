#include<stdio.h>
int main ()
{
    int tg,m,n,mang[100][100],a,b,i,j;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
      {
          for(j=1; j<=n; j++)
            scanf("%d",&mang[i] [j]);
      }
    scanf("%d%d",&a,&b);
    for(i=1; i<=m; i++)
      {
        tg=mang[i][a];
        mang[i][a]=mang[i][b];
        mang[i][b]=tg;
      }
  for(i=1; i<=m; i++)
      {
          for(j=1; j<=n; j++)
            printf("%d ",mang[i] [j]);
        printf("\n");
      }
}