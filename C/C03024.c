#include<stdio.h>
int tinhtong(int n)
{
    int tong=0;
    while (n!=0)
      {
          tong=tong+n%10;
          n=n/10;
      }
    return tong;
}
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (tinhtong(b)<tinhtong(a))
       printf("%d %d",b,a);
else
   printf("%d %d",a,b);
}