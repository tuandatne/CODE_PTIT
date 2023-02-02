#include<stdio.h>
int main ()
{
    int i,n,min,a[1000];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
       scanf("%d",&a[i]);
    for(i=1; i<n; i++)
      {
          min=i;
          for(int j=i+1; j<=n; j++)
            if (a[j]<a[min])
               min=j;
          int tg=a[min];
          a[min]=a[i];
          a[i]=tg;
          for(int k=1; k<=n; k++)
            printf("%d ",a[k]);
        printf("\n");
      }
}