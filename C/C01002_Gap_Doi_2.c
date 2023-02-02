#include<stdio.h>
int main ()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    for ( i=0; i<t; i++)
    {
        scanf("%lld",&n);
        n=n*2;
        printf("%lld\n",n);
    }
}