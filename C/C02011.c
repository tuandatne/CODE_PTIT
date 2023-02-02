#include<stdio.h>
int main ()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if (i>=b)
         for(j=i;j>=i-b+1; j--)
            printf("%d",j);
        else   
        {
            for(j=i;j<=b;j++)
               printf("%d",j);
            for(j=b-1; j>b-i;j--)
               printf("%d",j);
        }
        printf("\n");
    }
}