#include<stdio.h>
long long ucln(long long a  ,  long long b)
{
        long long du;
        while (b!=0)
        {
            du=a % b;
            a=b;
            b=du;
            /* code */
        }
        return a;
}
int  main ()
{
    long long a,b;
    scanf("%lld%lld",&a,&b);
    long long x,y;
    x=ucln(a,b);
    y=(a*b)/x;
    printf("%lld\n",x);
    printf("%lld",y);
}