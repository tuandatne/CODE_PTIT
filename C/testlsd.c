#include<stdio.h>
int main ()
{
    int i,n,x,dem=0,a,mang[1000];

    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i++)
      {
          scanf("%d",&a);
          if (a>x)
             {
                 dem++;
                 mang[dem]=i;
                 
             }
      }
    if (dem==0)
      printf("-1");
    else
       {
           for(i=1; i<=dem; i++)
              printf("%d ",mang[i]);
       }
}