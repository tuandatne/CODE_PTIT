#include<stdio.h>
#include<math.h>
int main ()
{
    long long m,n,m1,n1,t,dem,i;
    long long a[100000];
    scanf("%lld%lld",&m,&n);
    m1=(long long) sqrt(m);
    n1=(long long ) sqrt(n);
    dem=0;
    for( i=m1; i<=n1; i++)
       {
           t=i*i;
           if (t>=m && t<=n)
           {
               dem++;
               a[dem]=t;
           }
       }
    printf("%lld\n",dem);
    for(i=1; i<=dem; i++)
        printf("%lld\n",a[i]);
}