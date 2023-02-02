#include<stdio.h>
int main ()
{
     int t,n,a[1000],i;
     scanf("%d",&t);
     while (t--)
       {
           scanf("%d",&n);
           int mang1[50000]={0},max=-999;
           int mang2[50000]={0};
           for(i=0; i<n ;i++)
              {
                 scanf("%d",&a[i]);
                 mang1[a[i]]++;
                 if (mang1[a[i]] > max)
                     max=mang1[a[i]];
              }
            for( i=0; i<n; i++)
              {
                if (   (mang1[a[i]] == max)  && (mang2[a[i]] == 0) )
                  {
                      printf("%d ",a[i]);
                      mang2[a[i]]=1;
                  }
               }
            printf("\n");       
     }
}