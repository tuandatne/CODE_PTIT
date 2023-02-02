#include<stdio.h>
#include<math.h>
int main ()
{
    int t,j;
    long long l,r,a,b,i;
    int mang[1000000]={0};
    mang[1]=1;
    for(i=2; i<=sqrt(1000000); i++)
       {
           for(j=2; j<=1000000/i; j++)
              mang[i*j]=1;
       }
    scanf("%d",&t);
    while (t--)
      {
            scanf("%lld%lld",&l,&r);
            a=sqrt(l);
            b=sqrt(r);
            long long dem=0;
            for( i=a; i<=b; i++)
               {
                   long long test=i*i;
                   long long k=i;
                   if ((l<=test && test<=r) && (mang[k]==0))
                          dem++;
               }
            printf("%lld\n",dem);
      }
}