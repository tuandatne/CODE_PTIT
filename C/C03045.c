#include<stdio.h>
#include<math.h>
int snt(long long n)
{
    if ( n < 2) 
      return 0;
    for(int  i=2; i<=sqrt(n); i++)
       {
         if (n % i == 0)
            return 0;
       }
    return 1;
}
void xuli(long long n)
{      
    long long k,i;
    long long max1=-999;
    int check=0;
    for(i=2; i<=sqrt(n); i++)
         {
            if (n % i==0)
                {
                k=(long long ) n/i;
                if (snt(k)==1)
                    if(k>max1)              
                      {
                         printf("%lld\n",k);
                         check=1;
                         break;
                      }
                if (snt(i)==1)
                     {
                       if (i>max1)
                        max1=i;
                    }
                }
           }
      if( check==0)
       printf("%lld\n",max1);
}
int main ()
{
    int t,i;
    long long  n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%lld",&n);
          if (snt(n)==1)
            printf("%lld\n",n);
        else
          xuli(n);
      }    
}
