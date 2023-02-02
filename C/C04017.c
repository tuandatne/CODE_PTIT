#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j,n,x;
  int sangnt[10000]={0};
  sangnt[1]=1;
  for(i=2; i<=sqrt(10000); i++)
    {
        for(j=i; j<= 10000/i; j++)
          sangnt[i*j]=1;
    }
  scanf("%d",&n);
  int a[1000];
  int dem=0;
    for(i=0; i<n; i++)
      {
          scanf("%d",&x);
          if (sangnt[x]==0 )
            {
                dem++;
                a[dem]=x;
            }
      }
    printf("%d ",dem);
    for(i=1; i<=dem; i++)
       printf("%d ",a[i]);
}