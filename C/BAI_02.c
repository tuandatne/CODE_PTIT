#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a[10000];
    long long i,n;
    float x;
    scanf("%lld",&n);
    scanf("%f",&x);
    for (i=1; i<=n; i++)
       {
           scanf("%f",&a[i]);
       }
     /*for (i=1;i<=n; i++)
       {printf("%f \n",a[i]);}*/
    if (x>a[n])
    {
       n=n+1;
       a[n]=x;
       printf("c");
       exit (0);
    }
    if (x<a[1])
       {
           a[0]=x;
           printf("cc");
           exit (0);
       }
    for (i=1; i<n; i++)
       {
           if (a[i]<=x && x<=a[i+1])
           {
            n=n+1;      
            for ( long long j=n; j>i+1; j--)
                {
                    a[j]=a[j-1];
                }
            a[i+1]=x;
            break;
           }\
           
       }
    for (i=1;i<=n; i++)
       {
           printf("%.1f \n",a[i]);
        }
}