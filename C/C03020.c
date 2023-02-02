#include<stdio.h>
#include<math.h>
int kiemtra(long long n)
{
    int tong=0,t,check1=0,check2=0,check3=1,m=0,a[100];
    while (n!=0)
      {
          t=n%10;
          m++;
          a[m]=t;
          n=n/10;
          tong=tong+t;
          if(t==6)
            check1=1;
      }
    if (tong%10==8)
      check2=1;
     for(int i=1; i<=(int )m/2; i++)
      {
          if(a[i]!=a[m-i+1])
            {
                check3=0;
                break;
            }
      }
    if ((check1==1) &&(check2==1) && (check3==1))
       return 1;
    else
       return 0;
}
int main ()
{
    long long a,b,dem=0,min,max,i;
    scanf("%lld%lld",&a,&b);
    min=((a+b)-abs(a-b))/2;
    max=((a+b)+abs(a-b))/2;
      for(i=min; i<=max; i++)
         {
           if (kiemtra(i)==1)
              printf("%lld ",i);
         
          }
}