#include<stdio.h>
int main ()
{
    int i,n,x,tong=0;
    float gttb;
    scanf("%d",&n);
    for(i=0; i<n; i++)
      {
         scanf("%d",&x);
         tong=tong+x;
      }
    printf("%.3f",(float) tong/n);          
}