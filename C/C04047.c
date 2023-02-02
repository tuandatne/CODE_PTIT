#include<stdio.h>
void qs(int l, int r, int *p,  int *q)
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
              tg=q[i];
              q[i]=q[j];
              q[j]=tg;
              i++;
              j--;
          }
      }
    if ( i < r)
       qs(i,r,p,q);
    if ( l < j)
       qs(l,j,p,q);
}
int main ()
{
    int n,i,a[1000],b[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
       scanf("%d%d",&a[i],&b[i]);
    qs(1,n,a,b);
 //   for(i=1; i<=n; i++)
   //   printf("%d %d\n",a[i],b[i]);
   long long tong=0;
    for(i=1; i<=n; i++)
      {
          if (tong<a[i])
             tong=a[i]+b[i];
          else
            tong=tong+b[i];
      }
    printf("%lld\n",tong);
}