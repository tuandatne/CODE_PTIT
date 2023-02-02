#include<stdio.h>
#include<math.h>
int main ()
{
    long long a,b,dau,cuoi,tong;
    scanf("%lld%lld",&a,&b);
    dau=((a+b)-abs(a-b))/2;
    cuoi=((a+b)+abs(a-b))/2;
    tong=(long long )((dau+cuoi)*(cuoi-dau+1)/2);
    printf("%lld",tong); 
}