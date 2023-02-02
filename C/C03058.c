#include<stdio.h>
long long ucln(long long  a, long long b)
{
  long long du;
  while (b!=0)
    {
      du= a%b;
      a=b;
      b=du;
    }
     return a;
}
void xuli(int n)
{
  long long s=1;
  for(int i=1; i<=n; i++)
    {
     long long   k=ucln(s,i);
      s=s*i/k;
    }
  printf("%lld\n",s);
}
int main ()
{
  int i,t,n;
  scanf("%d",&t);
  for(i=0; i<t; i++)
    {
      scanf("%d",&n);
      xuli(n);
    }
}