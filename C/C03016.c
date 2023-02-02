#include<stdio.h>
long long a[1000];
void xuli(long long n)
 {
     int check=0;
     for(int i=1; i<=103; i++)
       {
           if (a[i]==n)
              {
                  printf("YES\n");
                  check=1;
                  break;
              }
       }
    if (check==0)
       printf("NO\n");
 }
int main ()
{
    int t,i;
    long long n;
    scanf("%d",&t);
    a[0]=1;
    a[1]=1;
    for(i=2; i<=102; i++)
      a[i]=a[i-1]+a[i-2];
    printf("%lld\n",a[102]);
    for(i=0; i<t; i++)
      {
          scanf("%lld",&n);
          xuli(n);
      }
}