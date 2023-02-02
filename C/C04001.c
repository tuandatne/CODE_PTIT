#include<stdio.h>
int main ()
{
    int i,t,j,n,x;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%d",&n);
          for(j=0;j<n; j++)
            {
                scanf("%d",&x);
                if (x %2 ==0)
                  printf("%d ",x);
            }
        printf("\n");
      }
}