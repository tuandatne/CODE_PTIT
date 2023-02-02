
#include<stdio.h>
int ucln(int a  ,  int b)
{
        int du;
        while (b!=0)
        {
            du=a % b;
            a=b;
            b=du;
            /* code */
        }
        return a;
}
int main ()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    for(i=a; i<b; i++)
       {
           for(j=i+1; j<=b; j++)
             if (ucln(i,j)==1)
               printf("(%d,%d)\n", i,j);
       }
}
