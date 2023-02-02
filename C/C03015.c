#include<stdio.h>
#include<math.h>
int kiemtrasnt(long long n)
{
    int i;
    if (n<2)
       return 0;
    for(i=2; i<=sqrt(n); i++)
      {
          if (n%i==0)
             return 0;
      }
    return 1;
}
void xuly(long long n)
{
    if (kiemtrasnt(n))
       printf("%lld\n",n);
    else
      {
          long long k,i;
          int check=0;
          long long max=0;
          for( i=2; i<=sqrt(n); i++)
            {
                if (n%i==0)
                  {
                      k=n/i;
                    if((kiemtrasnt(k)) && k>max)
                        {
                           printf("%lld\n",k);
                           check=1;
                           break;
                        }
                    if (kiemtrasnt(i))
                        if (i>max)
                          max=i;
                   }
            }
        if (check==0)
           printf("%lld\n",max);
        
      }
}
int main ()
{
    int i,t;
    long long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%lld",&n);
          xuly(n);
      }
}