#include<stdio.h>
int main ()
{
    int i,n,a[1000],mang[100000]={0};
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      {
         scanf("%d",&a[i]);
         mang[a[i]]++;
      }
    int dem=0;
    for(i=1; i<=n; i++)
      {
          if (mang[a[i]]==1)
            {
                dem++;
            }
      }
    printf("%d\n",dem);
    for(i=1; i<=n; i++)
      {
          if (mang[a[i]]==1)
            {
                printf("%d ",a[i]);
            }
      }
}