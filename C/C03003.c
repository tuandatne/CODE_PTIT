#include<stdio.h>
#include<math.h>
long long  kiemtrant(long long n)
{
  long long i;
  long long d=1;
  if (n<2) d=0;
    for(i=2;  i<= sqrt(n); i++)
       {
         if (n%i==0)
         {
            d=0;
            break;
         }
       }

  return d;
}
int main ()
{
  long long n,i,dem;
  scanf("%lld",&n);
  dem=0;
  for(i=2; dem<n;  i++)
   {
     if (kiemtrant(i)==1)
       {
         printf("%lld\n",i);
         dem=dem+1;
       }
   }
}