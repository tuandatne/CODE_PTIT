#include<stdio.h>
int main ()
{
  int i,t,j,n,k,x,dem;
  int a[1000], b[1000];
  scanf("%d",&t);
  for (i=1; i<=t; i++)
     {
       scanf("%d",&n);
       for(j=0; j<n; j++)
          {
           scanf("%d",&a[j]);
              b[j]=1;
          }
        printf("Test %d:\n",i);
        for(j=0; j<n; j++)
           {
             if (b[j]==1)
               {
                 x=a[j];
                 dem=1;
                 for(k=j+1; k<n; k++)
                    {
                      if (a[k]==x)
                         {
                           b[k]=0;
                           dem++;
                         }
                    }
                  printf("%d xuat hien %d lan\n",a[j],dem);
               }
           }
     }
}