#include<stdio.h>
void qs(int l, int r, int *p)
{
    int i,j,tg;
    i=l;
    j=r;
    int mid=p[(l+r)/2];
    while (i<=j)
      {
        while (p[i]<mid)
           i++;
        while (p[j]>mid)
           j--;
        if (i<=j)
          {
              tg=p[i];
              p[i]=p[j];
              p[j]=tg;
              i++;
              j--;
          }
      }
    if ( i < r)
       qs(i,r,p);
    if ( l < j)
       qs(l,j,p);
}
int main ()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
       scanf("%d",&a[i]);
    qs(0,n,a);
    for(i=0; i<n; i++)
      printf("%d ",a[i]);
}