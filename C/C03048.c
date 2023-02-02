#include<stdio.h>
int kiemtra(long long n)
{
        int k,demchan=0,demle=0;
        while (n!=0)
          {
              k=n % 10;
              if (k % 2 == 0)
                 demchan++;
            else
               demle++;
            n=n/10;
          }
        if (demchan>demle)
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
          if (kiemtra(n)==1)
             printf("YES\n");
        else
           printf("NO\n");
      }
}