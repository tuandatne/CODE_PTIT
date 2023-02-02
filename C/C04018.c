#include<stdio.h>
int main ()
{
    int i,t,j,n;
    int a[1000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
       {
           scanf("%d",&n);
           for(j=0; j<n; j++)
             {
                 scanf("%d",&a[j]);
             }
            int  dem=0;
            for(j=0; j<n-1; j++)
              if(a[j]==a[j+1])
                dem++;
           printf("%d\n",dem);
       }
}