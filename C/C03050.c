#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,t,a,b,max=0;
    int mang1[100000]={0};
    scanf("%d",&t);
    for(i=1; i<t; i++)
      {
          scanf("%d%d",&a,&b);
          mang1[a]++;
          mang1[b]++;
          if (a>max)
            max=a;
        if (b>max)
          max=b;
      }
    for(i=1; i<=max; i++)
      {
          if (mang1[i]==t-1)
             {
                   printf("Yes\n");
                   exit(0);
             }
      }
    printf("No\n");
}