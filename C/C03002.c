/*#include<stdio.h>
#include<math.h>
int kiemtrant(long long n)
{
    if (n==2 || n==3)
      return 1;
    else  
       {
           for(long long i=2; i<=(long long ) sqrt(n) ; i++)
             {
                 if (n%i==0)
                   {
                       return 0;
                   }
             } 
       }
    return 1;
}
int main ()
  {
      long long n;
      scanf("%lld",&n);
      for( long long i=2; i<=n; i++)
        if (kiemtrant(i)==1)
          printf("%lld\n",i);
  }*/
#include<stdio.h>
#include<math.h>
int main ()
{
  long long i,j,n;
   char  a[1000000];
    for (i=1; i<=1000000; i++)
          a[i]=1;
    a[1]=0;
    for(i=2; i<= (long long )sqrt(1000000); i++)
       {
           for(j=i; j<=(long long ) 1000000/i; j++)
                a[i*j]=0;
       }
    scanf("%lld",&n);
    for(i=2; i<=n; i++)
      if (a[i]==1)
        printf("%lld\n",i);
}