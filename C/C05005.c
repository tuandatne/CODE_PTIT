#include<stdio.h>
int main ()
{
    int m,n,i,j,t,a[20] [20];
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
     {
        scanf("%d %d",&m,&n);
        for(i=0; i<m; i++)
           {
            for(j=0; j<n; j++)
              scanf("%d",&a[i] [j]);
           }
        printf("Test %d:\n",k);
        for(i=1;i<m; i++)
          {
              for(j=1; j<n; j++)
                printf("%d ",a[i][j]);
             printf("\n");
          }   
        printf("\n");
       }
}