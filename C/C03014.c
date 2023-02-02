#include<stdio.h>
void chayct(long long a,   long long b)
{
    long long du,x,y;
    long long ucln,bcnn;
    x=a;
    y=b;
    while (b!=0)
      {
          du=a%b;
          a=b;
          b=du;
      }
    ucln=a;
    bcnn= (long long )(x*y)/ucln;
    printf("%lld %lld",bcnn,ucln);
    printf("\n");
}
int main ()
{
    int i,t;
    long long a,b;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%lld%lld",&a,&b);
          chayct(a,b);
      }
}