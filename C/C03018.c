#include<stdio.h>
#include<math.h>
int tinhtongcs(int n)
{
    int tong;
    tong=0;
    while (n!=0)
      {
          tong=tong+n%10;
          n=n/10;
      }
    return tong;
}
int snt(int n)
{
    int i,check;
    check=1;
    if (n<2) check=0;
    for(i=2; i<=( int )sqrt(n); i++)
      {
          if(n%i==0)
            {
                check=0;
                break;
            }
      }
    return check;
}
int main ()
{
    int mang[500];
    int i,a,b;
    for(i=0; i<=500; i++)
      {
          if (i==0 || i==1 || i==2 || i==3|| i==5 || i==8 || i==13 || i==21 || i==34 )
             mang[i]=1;
         else
            mang[i]=0;
      }
    int max1,min1;
    scanf("%d%d",&a,&b);
    min1=((a+b) - abs(a-b))/2;
    max1=((a+b) + abs(a-b))/2;
    for(i=min1; i<=max1; i++)
      {
          if (mang[tinhtongcs(i)]==1 && snt(i)==1)
              printf("%d ",i);
      }
}