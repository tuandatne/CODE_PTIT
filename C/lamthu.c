#include<stdio.h>
#include<math.h>
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
    int n,m,k,a[1000],j,mang[10000]={0},i;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(i=1; i<=m; i++)
       scanf("%d",&a[i]);
    qs(1,m,a);
    for(i=1; i<=m; i++)
      {
        for(j=a[i]-k; j<=a[i]+k; j++)
           if(j>=0 && j<=n )
             mang[j]=1;
      }
    int dem=0,dem1;
    i=1;
    k=k*2+1;
    while (i<=n)
        {
         if (mang[i]==0)
            {
                dem1=1;
              for(j=i+1; j<=n; j++)
                {
                  if (j<=n)
                   {
                     if (mang[j]==0)
                          dem1++;
                     else
                        break;
                   }
                }
               dem=dem+dem1/k;
               if (dem1 % k !=0)
                 dem++;
              i=j+1;     
            }
          else
            i=i+1;
       }
      printf("%d",dem);
     
}