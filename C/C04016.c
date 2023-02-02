#include<stdio.h>
#include<math.h>
int main ()
{
  int i,t,j,n,k,x;
  int sangnt[100000]={0};
  sangnt[1]=1;
  for(i=2; i<=sqrt(100000); i++)
    {
        for(j=i; j<= 100000/i; j++)
          sangnt[i*j]=1;
    }
  scanf("%d",&t);
  for (i=1; i<=t; i++)
     {
       scanf("%d",&n);
       int max=0,min=1000000;
       printf("Test %d:\n",i);
       int dem[100000]={0};
       for(j=0; j<n; j++)
          {
           scanf("%d",&x);
           if (sangnt[x]==0)
              {          
              dem[x]++;
              if (x>max)
                max=x;
              if (x<min)
                min=x;
              }
          }
        for(j=min; j<=max; j++)
           {
              if (dem[j]!=0)
              printf("%d xuat hien %d lan\n",j,dem[j]);
           }
    }
}                 