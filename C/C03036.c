#include<stdio.h>
#include<math.h>
int chayct(long long n)
{
    long long m,dao=0;
    m=n;
    int tong=0,k;
    while (n!=0)
      {
          k=n%10;
          dao=dao*10+k;
          tong=tong+k;
          if(k%2==0)
            return 0;
          n=n/10;
      }
    if (dao==m && tong%2==1)
      return 1;
    else
       return 0;
}
int main ()
{
    int i,t;
    long long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
       {
           scanf("%lld",&n);
            if (chayct(n)==1)
              printf("YES\n");
            else
              printf("NO\n");
       }
}