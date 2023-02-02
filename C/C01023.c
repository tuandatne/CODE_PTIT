#include<stdio.h>
int main()
{
    char xau[50];
    int t,i;
    scanf("%d",&t);
    for (i=0; i<t; i++)
       {
           scanf("%s",&xau);
           if (xau[0]=xau[strlen-1])
             printf("YES\n");
        else
        printf("NO\n");
       }
}