#include<stdio.h>
long int timmin(long int a, long int b)
{
    if (a>b)
    return b;
    else  
       return a;
}
int main ()
{
        long int a,b,c,min1;
        scanf("%ld%ld%ld",&a,&b,&c);
        min1=timmin(a,b);
        min1=timmin(min1,c);
        printf("%ld",min1);
}