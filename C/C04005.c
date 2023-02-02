#include<stdio.h>
int main ()
{
    int i,t,j,n,max;
    int a[1000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld",&n);
          max=0;
          for(j=0; j<n; j++)
            {
                scanf("%d",&a[j]);
                if (a[j]>max)
                  max=a[j];
            }
        printf("%d\n",max);
        for(j=0; j<n; j++)
           {
               if (a[j]==max)
                 printf("%d ",j);
           }
        printf("\n");
      }
}