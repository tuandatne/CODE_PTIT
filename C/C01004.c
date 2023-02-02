#include<stdio.h>
#include<math.h>
int main ()
{
    long long n;
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
       {
           scanf("%lld",&n);
            printf("%0.15lf", (double) 1/n);
            printf("\n");
       }
    
}