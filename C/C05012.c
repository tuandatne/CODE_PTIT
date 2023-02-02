#include<stdio.h>
void xuli(int n)
{
    int a[50][50],b[50][50],mang[50][50];
    int i,j,k;
    for(i=1; i<=n; i++)
      {
          for(j=1; j<=i; j++)
            a[i][j]=j;
        for(j=i+1; j<=n; j++)
            a[i][j]=0;
      }
    for(i=1; i<=n; i++)
       {
         for(j=1; j<=n; j++)
           b[j][i]=a[i][j];
       }
    for( k=1; k<=n; k++)
         {
              for(i=1; i<=n; i++)
                 {
                     mang[i][k]=0;
                     for(j=1; j<=n; j++)
                       mang[i][k]=mang[i][k]+a[i][j]*b[j][k];
                 }
         }
        for(i=1; i<=n; i++)
      {
          for(j=1; j<=n; j++)
            printf("%d ",mang[i][j]);
        printf("\n");
      }
  
}
int main ()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
       {
           scanf("%d",&n);
           printf("Test %d:\n",i);
           xuli(n);
       }
}