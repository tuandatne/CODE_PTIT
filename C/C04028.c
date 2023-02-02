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
    int i,n,a[1000],b[1000],j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
      {
          scanf("%d",&a[i]);
      }
    b[0]=a[0];
    printf("Buoc 0: %d\n",a[0]);
    for(i=1; i<n; i++)
       {
           b[i]=a[i];
           qs(0,i,b);
           printf("Buoc %d: ",i);
           for(j=0; j<=i; j++)
             printf("%d ",b[j]);
        printf("\n");
       }
}