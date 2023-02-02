#include<stdio.h>
int main ()
{
    int i,n,t;
    int a[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      {
          scanf("%d",&a[i]);
      }
    scanf("%d",&t);
    for(i=n-t+1; i<=n; i++)
       {
            printf("%d ",a[i]);
       }
    for(i=1; i<=n-t; i++)
      printf("%d ",a[i]);
}