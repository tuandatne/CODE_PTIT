#include<stdio.h>
int main ()
{
        int i,n,dem=0,a[100];
        scanf("%d",&n);
        if (n==0)
          printf("0");
        else
           {
               while (n!=0)
                 {
                     dem++;
                     a[dem]=n % 2;
                     n= (int) n/2;
                 }
              for(i=dem; i>=1; i--)
                printf("%d",a[i]);
           }
}