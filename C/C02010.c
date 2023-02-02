#include<stdio.h>
int main ()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        printf("%d",i);
        for(j=i+1; j<=b; j++)
          printf("%d",j);
        if (i>b)
          {
              for(j=b-1;j>0;j--)
                printf("%d",j);
          }
        else
           {
               for(j=i-1; j>0; j--)
                 printf("%d",j);
           }
        printf("\n");
    }
}