#include<stdio.h>
int main ()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        for(j=0;j<a-i; j++)
          printf("~");
        for(j=0; j<i; j++)
             printf("*");
        printf("\n");
        
    }

}