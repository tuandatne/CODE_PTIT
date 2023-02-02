#include<stdio.h>
#include<math.h>
int kiemtrant(long long n)
{
   int check=1,i;
    if (n<2) check=0;
    if (n==2 || n==3)
       check=1;
    else
       for(i=2; i<=(long long ) sqrt(n); i++)
         {
             if (n%i==0)
               {
                   check=0;
                   break;
               }
         }
    return check;
}
void phantichnt(long long n)
{
    if (kiemtrant(n)==1)
      printf("%lld(1)",n);
    else
      {
          int i=2,dem;

          while (i<=n)
            {
                if (kiemtrant(i))
                  {
                       dem=0;
                      while (n%i==0)
                        {
                            
                            dem=dem+1;
                            n=n/i;
                        }
                    if (dem!=0)
                      printf("%lld(%d) ", i, dem);
                      if (kiemtrant(n)==1)
                        {
                          printf("%lld(1)",n);  
                          break;
                        }
                  }
                i=i+1;
            }
      }
    printf("\n");
}
int main ()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
      {
          scanf("%lld",&n);
          printf("Test %d: ",i);
          phantichnt(n);
      }
}