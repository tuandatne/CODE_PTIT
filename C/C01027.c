#include<stdio.h>
int main ()
{
    long long a,b,du;
    int i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
       {
           scanf("%lld%lld",&a,&b);
           while (b!=0)
           {
               du=a%b;
               a=b;
               b=du;
           }
           printf("%lld\n",a);
       }
    a=(int) a;
}