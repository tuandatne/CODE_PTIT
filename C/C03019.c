#include<stdio.h>
#include<math.h>
int kiemtra(long long n)
{
    long long k=n;
    int tong=0,m=0,a[100],i;
    while (k!=0)
      {
          m++;
          a[m]=k%10;
          tong=tong+k%10;
          k=k/10;
      }
    int check1=1, check2=1;
    if (tong % 10 != 0)
       check1=0;
    for(i=1; i<=(int )m/2; i++)
      {
          if(a[i]!=a[m-i+1])
            {
                check2=0;
                break;
            }
      }
    if ((check1==1) && (check2==1))
      return 1;
    else
      return 0;
}
void xuli(int n)
{
    long long dau=1, cuoi=9;
    long long i,dem=0;
    for(i=1; i<n; i++)
       {
           dau=dau*10;
           cuoi=cuoi*10+9;
       }
    for(i=dau; i<=cuoi; i++)
      if(kiemtra(i))
        dem++;
    printf("%lld\n",dem);
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