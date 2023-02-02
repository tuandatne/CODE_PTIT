#include<stdio.h>
#include<math.h>
int mang[1000]= {0};
int  kiemtrant(int n)
{
    int i;
    if (n<2) return 0;
    for ( i=2; i<=sqrt(n);i++)
        {
        if (n%i==0)
         return 0; 
        }
    return 1;
}
void chayct(int n)
{
    int i,dem=0;
    if (kiemtrant(n)==1)
      printf("%lld\n",n);
    else
       {
           i=2;
           while(i<=n)
              {
                  if ((kiemtrant(i)==1) && (n % i == 0))
                     {
                         dem++;
                         mang[dem]=i;
                         while (n%i==0)
                            {
                                 n=n/i;
                            }
                               
                        if (kiemtrant(n)==1)
                        {
                            dem++;
                            mang[dem]=n;
                            break;
                        }
                
                     }
                  i=i+1;
              }
            long long s=1;
            for(i=1; i<=dem; i++)
                s=s*mang[i];
            printf("%lld\n",s);
        
        }
}
int main ()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
       {
         scanf("%d",&n);
         chayct(n);
       }  
}