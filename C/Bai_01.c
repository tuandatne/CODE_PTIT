#include<stdio.h>
#include<math.h>
#include<limits.h>
int main ()
{
    long long i,x,n,vt,min1,t;
    scanf("%lld%lld",&n,&x);
    min1= LLONG_MAX;
    for(i=1; i<=n; i++)
       {
             scanf("%lld",&t);
             if (abs(t-x)<min1)
                {
                    min1=abs(t-x);
                    vt=i;
                }
       }
    printf("%lld",vt);
}