#include<stdio.h>
void qs(int l, int r, int  *p)
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
    int n,i,demchan=0,demle=0;
    int x,mang1[100],mang2[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
      {
        scanf("%d",&x);
        if (x %2 ==0)
           {
              demchan++;
              mang1[demchan]=x;
           }
        else
          {
            demle++;
            mang2[demle]=x;
          }
      }
    qs(1,demchan,mang1);
    for(i=1; i<=demchan; i++)
       printf("%d ",mang1[i]);
    qs(1,demle,mang2);
    for(i=1; i<=demle; i++)
       printf("%d ",mang2[i]);
}