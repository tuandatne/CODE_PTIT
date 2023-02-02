#include<stdio.h>
int a[100][100],b[100] [100];
void xuli(int m, int n)
{
    int i,j,vt,tong=0,max=-999;
    for(i=1; i<=m; i++)
      {
          tong=0;
          for(j=1; j<=n; j++)
            tong=tong+ a[i][j];
          if (tong>max)
            {
            max=tong;
            vt=i;
            }
      }
    for(i=1; i<=n; i++)
      b[vt][i]=1;
    max=-999;
    for(j=1; j<=n; j++)
      {
        tong=0;
        for(i=1; i<=m; i++)
          {
            if (b[i] [j]==0 )
              tong=tong+a[i] [j];
          }
        if (tong>max)
          {
            vt=j;
            max=tong;
          }
      }
    for(i=1; i<=m; i++)
       b[i][vt]=1;
    for(i=1; i<=m; i++)
      {
        int check=0;
        for(j=1; j<=n; j++)
          if (b[i][j]==0)
           {
            printf("%d ",a[i] [j]);
            check=1;
           }
       if (check==1) printf("\n");
      }
}
int main ()
{
    int i,t,j,k,m,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
      {
          scanf("%d%d",&m,&n);
          for(j=1; j<=m; j++)
            {
              for(k=1; k<=n; k++)
                {
                  scanf("%d",&a[j] [k]);
                  b[j] [k]=0;
                }
            }
        printf("Test %d:\n",i);
        xuli(m,n); 
      }
}