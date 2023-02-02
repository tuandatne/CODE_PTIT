#include<stdio.h>
int tinhtong(long long n)
{
    int tong=0;
    while (n!=0) 
      {
          tong=tong+n%10;
          n=n/10;
      }
    if (tong %10==0)
      return 1;
    else 
       return 0;
}
int main ()
{
    long long n;
    int i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
     {
         scanf("%lld",&n);
         if (tinhtong(n)==1)
            printf("YES\n");
        else 
           printf("NO\n");
     }
}