#include<stdio.h>
int kiemtra(long long  n)
{
     int k;
    while(n!=0)
      {
          k=n%10;
          n=n/10;
          if (k%2==1)
              return 0;
      }
    return 1;
}
void chayct(long long n)
{
    if (n%2==1)
     printf("NO\n");
    else
       {
           if (kiemtra(n)==1)
             printf("YES\n");
        else
           printf("NO\n");
       }
}
int main ()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
       {
           scanf("%lld",&n);
           chayct(n);
       }
}