#include<stdio.h>
int a[100009];
long long max(long long a, long long b)
{
    if (a>b)
       return a;
    else
       return b;
}
void xuli(int n)
{
    int i;
    long long sum1=0,sum2=-1e18;
    for(i=0; i<n; i++)
       {
           sum1+=a[i];
        sum2=max(sum1,sum2);
        if (sum1<0)
           sum1=0;
       }
    printf("%lld\n",sum2);
}
int main ()
{
    int i,t,n;
    scanf("%d",&t);
    while (t--)
       {
           scanf("%d",&n);
           for(i=0; i<n; i++)
              scanf("%d",&a[i]);
           xuli(n);
       }
}