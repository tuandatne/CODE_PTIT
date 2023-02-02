#include<stdio.h>
#include<limits.h>
int main ()
{
    int i,n;
    long long x;
    scanf("%d",&n);
    long long max0=LLONG_MIN;
    long long  max1=LLONG_MIN;
 
     for(i=0; i<n; i++)
      {
          scanf("%ld",&x);
          if (x>max0)
            max0=x;
          if (x>max1 &&x<max0 )
             max1=x;
      }
    printf("%ld %ld",max0,max1);
}