#include<stdio.h>
int main ()
{
    long long n;
    int a[100];
    scanf("%lld",&n);
    int dem;
    dem=0;
    while (n!=0)
      {
          dem++;
          a[dem]=n%10;
          n= (long long) n/10;
      }
    int tg;
    tg=a[dem];
    a[dem]=a[1];
    a[1]=tg;
    if (a[dem]==0)
     dem=dem-1;
    for(int i=dem; i>0; i--)
       printf("%d",a[i]);
}
