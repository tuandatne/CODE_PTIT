#include<stdio.h>
int main ()
{
    long long n;
    int tich;
    scanf("%lld",&n);
    tich=1;
    while (n!=0)
    {
        tich=tich*(n%10);
        n=(long long ) n/10;
    }
    printf("%d",tich);
}