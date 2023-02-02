#include<stdio.h>
int a[1000],b[1000]={0};
void xuli(int n)
{
   int i,j,max=-999;
   b[1]=1;
    for(i=2; i<=n; i++)
     {
         if ( a[i] > a[i-1])
           b[i] = b[i-1]+1;
        else
           b[i]=1;
        if (b[i]>max)
          max=b[i];
     }
    printf("%d\n",max);
    for(i=1; i<=n; i++)
      {
          if (b[i]==max)
            {
              for(j=max;j>=1; j--)
                 printf("%d ",a[i-j+1]);
               printf("\n");
            }
      }   
}
int main ()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
       {
           scanf("%d",&n);
           for(int j=1; j<=n; j++)
              scanf("%d",&a[j]);
        printf("Test %d:\n",i);
        xuli(n);
       }
}