#include<stdio.h>
int main ()
{
       int i,t,n,a[100];
       a[1]=1;
       a[2]=2;
       a[3]=5;
       a[4]=10;
       a[5]=20;
       a[6]=50;
       a[7]=100;
       a[8]=200;
       a[9]=500;
       a[10]=1000;
       scanf("%d",&t);
       while (t--)
         {
                scanf("%d",&n);
                int dem=0,k=10;
                while (n!=0)
                  {
                    while (n<a[k])
                       k--;
                     n=n-a[k];
                     dem++;
                  }
              printf("%d\n",dem);
         }
}