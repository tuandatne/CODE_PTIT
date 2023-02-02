#include<stdio.h>
int main ()
{
    int m,n,p,i,j,k,q,a[50][50],b[50] [50],c[50] [50],mang[50] [50];
    scanf("%d%d%d%d",&m,&n,&p,&q);
    for(i=0; i<m; i++)
       {
           for(j=0; j<n; j++)
              scanf("%d",&a[i] [j]);
       }
    for(i=0; i<n; i++)
       {
           for(j=0; j<p; j++)
              scanf("%d",&b[i] [j]);
       }
    for(i=0; i<p; i++)
       {
           for(j=0; j<q; j++)
              scanf("%d",&c[i] [j]);
       }
    for(i=0; i<p; i++)
      {
          for(j=0; j<m; j++)
             {
                 for (k=0; k<n; k++)
                    mang[j] [i]=mang[j] [i]+a[j] [k] *b[k] [i];
             }
      }
    for(i=0; i<q; i++)
      {
          for(j=0; j<m; j++)
             {
                 a[j] [i]=0;
                 for (k=0; k<n; k++)
                    a[j] [i]=a[j] [i]+mang[j] [k] *c [k] [i];
             }
      }
    
    for(i=0; i<m; i++)
    {
      for(j=0; j<q; j++)
        printf("%d ",a[i] [j]);
    printf("\n");
    }
}