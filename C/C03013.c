#include<stdio.h>
#include<stdlib.h>
void chayct(int n)
{
    long long a,b,c;
    int dem;
    a=0;
    b=1;
    c=0;
    dem=2;
    printf("%d ",a);
    if (n==1)
      exit(0);
    printf("%d ",b);
    if (n==2)
      exit(0);
    while(dem<n)
          {
             c=a+b;
             dem=dem+1;
             printf("%lld ",c);
             a=b;
             b=c;   
          }
}
int main ()
{
    int n;
    scanf("%d",&n);
    chayct(n);
}