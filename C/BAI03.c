#include<stdio.h>
int main ()
{
        int  a[100000],b[100000];
        long long m,n,i,p,t;
        scanf("%lld %lld %lld",&n,&m,&p);
        for (i=0; i<n; i++)
             scanf("%lld",&a[i]);
        for (i=0; i<m; i++)
           scanf("%lld",&b[i]);
        t=m+n;
        for (i=t-1; i>=p+m;i--)
           {
               a[i]=a[i-m];
           }
        for (i=0; i<m; i++)
           {
               a[i+p]=b[i];
           }
        for (i=0; i<t; i++)
           {
               printf("%lld ",a[i]);
           }
}