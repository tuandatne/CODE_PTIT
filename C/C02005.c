#include<stdio.h>
int main ()
{
    int i,j,a,b;
    scanf("%d%d",&a,&b);
    for(i=a; i>0; i--)
    {
        for(j=0;j<a-i; j++)
          printf("~");
        for(j=0; j<b; j++)
              printf("*");
        printf("\n");
        
    }

}