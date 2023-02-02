#include<stdio.h>
int main ()
{
    long long i,n,a[1000];
    scanf("%lld",&n);
     long long   min=1e18;
    for(i=0; i<n; i++)
      {
        scanf("%lld",&a[i]);
        if (a[i]<min)
          min=a[i];
       }
    long long  min1=1e18;
    for(i=0; i<n; i++)
      {
          if (a[i]<min1 && a[i]!=min)
            {
                  min1=a[i];
            }
      }
      printf("%lld %lld",min,min1);
}