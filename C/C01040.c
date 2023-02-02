#include<stdio.h>
#include<math.h>
int main ()
{
    long long n,i;
    int tong;
    scanf("%lld",&n);
    tong=0;
    for (i=1; i<=(long long ) n/2; i++)
    {
        if (n%i==0)
           tong=tong+i;
    }
    if (tong==n)
      printf("1");
    else   
       printf("0");

}