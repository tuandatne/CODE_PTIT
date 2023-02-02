#include<stdio.h>
#include<limits.h>
int main ()
{
  long int i,n,a[100000]={0},min,max,x;
  scanf("%ld",&n);
  min=LONG_MAX;
  max=LONG_MIN;
  for(i=0; i<n; i++)
     {
       scanf("%ld",&x);
       a[x]++;
       if (x>max)
          max=x;
        if (x<min)
          min=x;
     }
    int dem=0;
  for(i=min; i<=max; i++)
    if (a[i]>1)
       dem++;
  printf("%d\n",dem);
  for(i=min; i<=max; i++)
    if (a[i]>1)
    printf("%ld ",i);
}