#include<stdio.h>
#include<math.h>
int snt(long n)
{
    if (n<2)
       return 0;
    long i;
    for(i=2; i<=sqrt(n); i++)
      {
          if (n % i==0)
             return 0;
      }
    return 1;
}
void chayct(long n)
{
    long i,k;
    for(i=2; i<=n/2; i++)
      {
          k=n-i;
          if (snt(i)==1 && snt(k)==1)
             printf("%ld %ld ",i,k);
      }
}
int main ()
{
    long i,t,n;
    scanf("%ld",&t);
    for(i=0; i<t;  i++)
      {
          scanf("%ld",&n);
          chayct(n);
          printf("\n");
      }
}