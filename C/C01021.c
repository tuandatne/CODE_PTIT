#include<stdio.h>
int main()
{
    long long n,tong,t,i;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        tong=0;
        scanf("%lld",&n);
         while (n!=0)
            {
             tong=tong+n%10;
             n= (long long )n/10;
             }
         printf("%lld\n",tong);
    }
}