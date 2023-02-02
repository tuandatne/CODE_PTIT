#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    int a[1000],b[1000];
    for(i=1; i<=n; i++)
      {
          scanf("%d",&a[i]);
          b[i]=1;
      }
    int j;
    for(i=1; i<n; i++)
       {
           if (b[i]==1)
           {
             for(j=i+1; j<=n; j++)
               if(a[j]==a[i])
                 b[j]=0;
           }
       }
    for(i=1; i<=n; i++)
      if (b[i]==1)
        printf("%d ",a[i]);
}