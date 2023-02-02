#include<stdio.h>
int main ()
{
    int i,n,a[1000],mang[100000]={0},check[100000]={0};
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      {
         scanf("%d",&a[i]);
         mang[a[i]]++;
      }
    for(i=1; i<=n; i++)
      {
          if (mang[a[i]] >1 && check[a[i]]==0)
            {
                printf("%d ",a[i]);
                check[a[i]]=1;
            }
      }
}