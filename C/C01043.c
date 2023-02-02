#include<stdio.h>
long long giaithua(int n)
{
    int i;
    long long tich;
    tich=1;
    for (i=1;i<=n; i++)
       {
           tich=tich*i;
       }
    return tich;
}
int main ()
{
    long long n,tong,k;
    int i;
    tong=0;
    scanf("%lld",&n);
    k=n;
    while (n!=0)
    {
        i=n%10;
        n=(long long) n/10;
        tong=tong+giaithua(i);
    }
   // printf("%lld",tong);
    if (tong==k)
      printf("1");
    else
      printf("0");
}