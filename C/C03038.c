#include<stdio.h>
#include<math.h>
void xuli(long n, long p)
{
    long i,dem=0,k;
    for(i=1; i<=n; i++)
       {
           k=i;
           while (k%p==0 && k!=0)
              {
                    dem++;                    
                    k=  (long) k/p;
              }
       }
    printf("%ld\n",dem);
}
int main ()
{
    int t,i;
    long p,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld %ld",&n,&p);
          xuli(n,p);
      }
}