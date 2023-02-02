#include<stdio.h>
long long a[100][100],b[100] [100],mang[100] [100];
void xuli(long long m, long long n)
{
    long long i,j,k;
    for(i=1; i<=m; i++)
       {
         for(j=1; j<=n; j++)
           b[j][i]=a[i][j];
       }
    for( k=1; k<=m; k++)
         {
              for(i=1; i<=m; i++)
                 {
                     mang[i][k]=0;
                     for(j=1; j<=n; j++)
                       mang[i][k]=mang[i][k]+a[i][j]*b[j][k];
                 }
         }
        for(i=1; i<=m; i++)
      {
          for(j=1; j<=m; j++)
            printf("%lld ",mang[i][j]);
        printf("\n");
      }
    //  printf("\n");
}
int main ()
{
    long long t,m,n,j,i,k;
    scanf("%lld",&t);
   
    for(i=1;i<=t; i++)
      {
           scanf("%lld%lld",&m,&n);
          for(j=1; j<=m; j++)
             for(k=1; k<=n; k++)
                scanf("%lld",&a[j][k]);
        printf("Test %lld:\n",i);
          xuli(m,n);
      }
}