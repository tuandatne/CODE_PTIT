#include<stdio.h>
int kiemtra(long long n)
{
    long long a,b,c;
    a=1;
    b=1;
    c=0;
    while(c<n)
      {
          c=a+b;
             a=b;
          b=c; 
       
      }
    if (c==n)
      return 1;
    else
     return 0;
}
int main ()
{
    long long n;
    scanf("%lld",&n);
    printf("%d", kiemtra(n));
}