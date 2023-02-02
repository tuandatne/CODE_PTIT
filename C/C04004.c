#include<stdio.h>
void chayct(int n)
{
    long long a,b,c;
    int dem=2;
    a=1;
    b=1;
    while (dem!=n)
      {
          c=a+b;
          a=b;
          b=c;
          dem++;
      }
    printf("%lld\n",c);
}
int main ()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
     {
         scanf("%d",&n);
         if (n<=2)
           printf("1\n");
        else
         chayct(n);
     }
}