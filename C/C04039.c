#include<stdio.h>
#include<math.h>
long long  tinhtong(int n)
{
    long long s=(n+2) *(n-1) /2;
    return s;
}
int main ()
{
    long long a[1000],b[1000];
    int n=0;
    while (scanf("%lld%lld",&a[n],&b[n]) >=0 )
    {
        n++;
    }
    for(int i=0; i<n; i++)
    {
        if (b[i] < a[i])
        {
            int tg=a[i];
            a[i]=b[i];
            b[i]=tg;
        }
        long long  cuoi,d,dem,bien;
             bien=a[i] + 1;
             cuoi=b[i] - 1;
             d=2;
             dem=2;
             while (bien != cuoi)
             {
                 if (tinhtong(d) <= cuoi-bien)
                 {
                    bien=bien+d;
                    dem++;
                    d++;
                 }
                else
                   d--;
             }
        printf("%lld\n",dem);
    }                              
}