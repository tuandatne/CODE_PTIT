#include<stdio.h>
int main ()
{
    long long n;
    int k,demle,demchan;
    demle=0;
    demchan=0;
    scanf("%lld",&n);
    while( n!=0)
    {
        k=n%10;
        if (k%2==0)
          demchan++;
        else
           demle++;
        n=n/10;
    }
    printf("%lld %lld",demle,demchan);
}