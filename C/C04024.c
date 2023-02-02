#include<stdio.h>
void quicksort(long int l, long int  r,long int *a)
{
   long int i,j,mid,tg;
   mid=a[  (long int ) (l+r) / 2];
   i=l;
   j=r;
   while (i<=j)
     {
      while(a[i]>mid)
        i++;
      while (a[j]<mid)
         j--;
      if (i<=j) 
      {
         tg=a[i];
         a[i]=a[j];
         a[j]=tg;
         i++;
         j--;
      }
     }   
    if (l<j)  quicksort(l,j,a);
    if (i<r) quicksort(i,r,a);
}
int main ()
{
   long int i,n;
   long int b[1000];
   long int *a=b;
   scanf("%ld",&n);
   for(i=1; i<=n; i++)
     scanf("%ld",a+i);
   quicksort(1,n,a);
   for(i=1; i<=n; i++)
      printf("%ld ",*(a+i));
}