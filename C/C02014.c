#include<stdio.h>
int main ()
{
   int n,k,i,j,t;
   scanf("%d",&n);
   k=n*2-1;
   int a[k+1] [k+1];
   for(i=1; i<=k; i++)
      {
         a[1] [i]=n;
         a[k] [i]=n;
      }
   for(i=2; i<=n; i++)
     {
        for(j=1; j<=i; j++)
           a[i] [j]=n-j+1;
        for(int t=j; t<=k-i; t++)
           a[i][t]=n-j+2;
       for(j=k-i+1;j<=k; j++)
         a[i] [j]=n-k+j;
     }
   i=n;
   j=n;
   while (i!=1)
     {
        i--;
        j++;
        for(t=1; t<=k; t++)
           a[j] [t]=a[i] [t];
     }
   for(i=1; i<=k; i++)
     {
        for(j=1; j<=k; j++)
          printf("%d",a[i] [j]);
         printf("\n");
     }
}