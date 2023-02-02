#include<stdio.h>
#include<math.h>
int hoanhao(int n)
{
    int tong,i;
    tong=1;
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
    int n,i;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
      {
        if (hoanhao(i)==1)
           printf("%d ",i);
      }
}