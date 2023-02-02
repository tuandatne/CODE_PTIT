#include<stdio.h>
int main ()
{
    int m,n,a[1000],b[1000],i,p;
    scanf("%d%d",&m,&n);
    for(i=0; i<m; i++)
      scanf("%d",&a[i]);
    for(i=0; i<n; i++)
      scanf("%d",&b[i]);
    scanf("%d",&p);
    for(i=0; i<p; i++)
        printf("%d ",a[i]);
    for(i=0; i<n; i++)
      printf("%d ",b[i]);
    for(i=p; i<m; i++)
      printf("%d ",a[i]);
}