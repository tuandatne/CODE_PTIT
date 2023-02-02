#include<stdio.h>
#include<math.h>
int hoanhao(int n)
{
    int tong,i;
    tong=1;
    if (n==1)
      return 0;
    for(i=2; i<=sqrt(n); i++)
      {
          if (n %i==0)
            {
               if (i!= (int) n /i)
                 tong=tong+i+(int )n/i;
               else
                  tong=tong+i;
                   
            }
       }
    if (tong==n)
      return 1;
    else
      return 0;
}
int main ()
{
    int a,b,i,min1,max1;
    scanf("%d%d",&a,&b);
    min1=((a+b)-abs(a-b))/2;
    max1=((a+b)+abs(a-b))/2;
    for(i=min1; i<=max1; i++)
      {
        if (hoanhao(i)==1)
           printf("%d ",i);
      }
}