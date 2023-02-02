#include<stdio.h>
#include<math.h>
int  kiemtrant(int n)
{
    int i;
    if (n<2) return 0;
    for ( i=2; i<=sqrt(n);i++)
        {
        if (n%i==0)
         return 0; 
        }
    return 1;
}
int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d",kiemtrant(n));
}