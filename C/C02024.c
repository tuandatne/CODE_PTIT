#include<stdio.h>
int main ()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=1; i<=a; i++)
      {
          if (i>=b)
           for(j=b; j>0; j--)
             printf("%c",j+64);
          else
             {
                 for(j=i; j<=b; j++)
                   printf("%c",j+64);
                for(j=i-1;j>0; j--)
                   printf("%c",j+64);
             }
           printf("\n");
      }
}