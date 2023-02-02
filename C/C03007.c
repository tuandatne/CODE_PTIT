#include<stdio.h>
#include<math.h>
int kiemtrant(long long n)
{
    int check=1;
    long long i;
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
int kiemtrathuannghich( long long n)
{
    int k;
    long long m,dao=0;
    m=n;
    while (n!=0)
       {
           k=n%10;
           dao=dao*10+k;
           n=(long long )n/10;
       }
    if (dao==m)
      return 1;
    else
      return 0;
}
int main ()
{
    int i,t,dem;
    long long j,a,b;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%lld%lld",&a,&b);
          dem=0;
          for(j=a; j<=b; j++)
            {
                if( kiemtrathuannghich(j)==1 && kiemtrant(j)==1)
                 { 
                  dem=dem+1;
                  if (dem<=10)
                    printf("%lld ",j);
                  else
                  { 
                    dem=1;
                    printf("\n");
                    printf("%lld ",j);
                  } 
                 }
              }
          printf("\n");
      }
}