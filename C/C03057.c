#include<stdio.h>
void xuli(long long a, long long b)
{
    int mang1[100], mang2[100];
    int m=0,n=0;
    while (a!=0)
      {
          m++;
          mang1[m]= a % 10;
          a=a/10;
      }    
    while (b!=0)
      {
          n++;
          mang2[n]=b % 10;
          b=b/10;
      }    
    int i;
    long long x=0,y=0;
    for(i=m; i>=1 ; i--)
       {
           if (mang1[i]!=6)
             x=x*10+mang1[i];
           else
              x=x*10+5;
       }
     for(i=n; i>=1 ; i--)
       {
           if (mang2[i]!=6)
               y=y*10+mang2[i];
        else
            y=y*10+5;
       }
     printf("%lld ",x+y);
     x=0; y=0;
    for(i=m; i>=1 ; i--)
       {
           if (mang1[i]!=5)
             x=x*10+mang1[i];
        else
            x=x*10+6;
       }
     for(i=n; i>=1 ; i--)
       {
           if (mang2[i]!=5)
               y=y*10+mang2[i];
        else
            y=y*10+6;
       }
       printf("%lld\n",x+y);
}
int main ()
{
    long long a,b;
    int t;
    scanf("%d",&t);
    while (t--)
      {
          scanf("%lld%lld",&a,&b);
          xuli(a,b);
      }
}