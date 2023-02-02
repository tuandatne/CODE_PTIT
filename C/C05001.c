#include<stdio.h>
int main ()
{
    int i,n,m,j,a[20] [20];
    scanf("%d%d",&m,&n);
    for(i=0; i<m; i++)
      {
          for(j=0; j<n; j++)
             scanf("%d",&a[i] [j]);
       }
    for(i=0; i<n; i++)
      {
          for(j=0; j<m; j++)
            printf("%d ",a[j] [i]);
        printf("\n");
      }
}