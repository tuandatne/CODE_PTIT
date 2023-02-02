#include<stdio.h>
int main ()
{
    long long t,i;
    long long n;
    scanf("%lld",&t);
    for ( i=0; i<t; i++)
    {
        scanf("%lld",&n);
        n=n*n;
        printf("%lld\n",n);
    }
}