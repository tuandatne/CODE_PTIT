#include<stdio.h>
int main ()
{
    int n,i,a[100],j,tg;
    scanf("%d",&n);
    for(i=1;i<=n; i++)
      {
          scanf("%d",&a[i]);
      }
    for(i=1; i<=n-1; i++)
      {
          for(j=i+1; j<=n; j++)
            if (a[i]>a[j])
              {
                  tg=a[i];
                  a[i]=a[j];
                  a[j]=tg;
              }
           printf("Buoc %d: ",i);
           for(int k=1; k<=n; k++)
             printf("%d ",a[k]);
        printf("\n");
      }
}