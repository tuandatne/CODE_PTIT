#include<stdio.h>
int main ()
{
    int i,j,a,b;
    scanf("%d%d",&a,&b);
    for(i=a; i>0; i--)
    {
        for(j=0;j<a-i; j++)
          printf("~");
       if (i==1 || i== a)
         {
              for(j=0; j<b; j++)
              printf("*");
         }
        else 
        {
            printf("*");
            for(j=2; j<=b-1; j++)
              printf(".");
            printf("*");
        }
        printf("\n");
        
    }

}