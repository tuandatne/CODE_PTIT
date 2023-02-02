#include<stdio.h>
int main ()
{
    long long n;
    int dem;
    dem=0;
    scanf("%lld",&n);
      while (n!=0)
      {
          dem++;
          n= (long long) n/10;
      }
    printf("%d",dem);
}