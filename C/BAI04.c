#include<stdio.h>
int main ()
{
    int  i,n,dem,max,vt;
    max=0;
    int  a[10000];
    scanf("%d",&n);
    for (i=0; i<n; i++)
       scanf("%d",&a[i]);
    for (i=0; i<n-1; i++)
       a[i]=a[i+1]-a[i];
  //  for (i=0; i<n-1; i++)
    //  printf("%d  ",a[i]);
    for (i=0; i<n-1; i++)
       {
          if (a[i]>=0)
          {
             dem=1;
             for (int j=i;j<n-1; j++)
                {
                   if (a[j]>=0)
                      dem++;
                  else 
                     break;
                }
            if (dem>max)
            {
              max=dem;
              vt=i;
            }
          }
       }
   printf("%d %d",vt,max);
}