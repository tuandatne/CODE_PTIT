#include<stdio.h>
int main ()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=1; i<=a; i++)
       {
          if(i>=b)
            {
                for(j=1; j<=b; j++)
                   printf("%c",64+b-1);
            }
          else
             {
                 for(j=i;j<=b; j++)
                   printf("%c",64+j-1);
                for(j=1; j<i; j++)
                  printf("%c", 64+b-1);
             }
            printf("\n");
       }
}