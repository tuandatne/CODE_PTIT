#include<stdio.h>
int main ()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=a; i>0; i--)
       {
          if(i>=b)
            {
                for(j=1; j<=b; j++)
                   printf("%c",64+b);
            }
          else
             {
                 for(j=i;j<=b; j++)
                   printf("%c",64+j);
                for(j=1; j<i; j++)
                  printf("%c", 64+b);
             }
            printf("\n");
       }
}