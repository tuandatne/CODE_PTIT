#include<stdio.h>
long  ucln(long a, long b )
{
    long du;
    while (b!=0)
     {
         du=a%b;
         a=b;
         b=du;
     }
    return a;
}
int main ()
{
    int i,t;
    long a,b,c,d;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
          if (ucln(a,b)==ucln(c,d))
             printf("YES\n");
        else
           printf("NO\n");
      }
}