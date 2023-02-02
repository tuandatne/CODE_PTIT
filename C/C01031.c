#include<stdio.h>
#include<math.h>
int  kiemtrant(long long n)
{
    long long i;
    if (n==1)
       return 0;
    else 
      {
          if (n==2 || n==3)
            return 1;
          else
            {
                for ( i=2; i<=(long long) sqrt(n);i++)
                  {
                    if (n%i==0)
                      return 0; 
                   }
            }
      }
    return 1;
}
void chayct(long long n)
{
    long long i;
    if (kiemtrant(n)==1)
      printf("%lld",n);
    else
       {
           i=2;
           while(i<=n)
              {
                  if (kiemtrant(i)==1)
                     {
                         while (n%i==0)
                           {
                               n=(long long) n/i;
                               if (n!=1)
                                 printf("%lldx",i);
                            else
                                   printf("%lld",i);
                           }
                        if (kiemtrant(n)==1)
                        {
                            printf("%lld",n);
                            break;
                        }
                
                     }
                  i=i+1;
              }
        }
}
int main ()
{
    long long n;
    scanf("%lld",&n);
    chayct(n);  
}