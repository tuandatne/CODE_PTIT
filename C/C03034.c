#include<stdio.h>
#include<math.h>
void chayct(long n)
{
    long i,dem,k;
    dem=0;
    for(i=1; i<=sqrt(n); i++)
      {
          if ( n % i == 0)
            {
                k= ( long ) n/i;
                if (k==i)
                  {
                   if(k%2==0)
                     dem++;
                  }
                else
                   {
                   if (k%2==0) dem++;
                   if (i%2==0) dem++;
                   }
            }
      }
    printf("%ld\n",dem);
}
int main ()
{
    int i,t;
    long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld",&n);
          chayct(n);         
      }
}