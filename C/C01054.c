#include<stdio.h>
#include<math.h>
int sangnt[2000000]={0};
long long tong=0;
void  xuly(int n)
  {
    if (sangnt[n]==0)
      tong=tong+n;
    else
    {
    int i=2;
    while (i<=n)
      {
          if(sangnt[i]==0)
             {
                 while (n % i == 0)
                   {
                        tong=tong+i;
                        n=n/i;
                   }
                if (sangnt[n]==0)
                  {
                      tong=tong+n;
                      break;
                  }
             }
           i++;
      }
        }
  }
int main ()
{
    int i,n,x,j;
    int max=-999;
    scanf("%d",&n); 
    int a[n];
    for(i=0;i<n; i++)
      {
          scanf("%d",&a[i]);
          if (a[i]>max)
            max=a[i];
      }
    //int sangnt[max]={0};// mac dinh gia tri dung la 0 con sai la 1
    sangnt[1]=1;
    for(i=2; i<= (long long )sqrt(max); i++)
       {
           for(j=i; j<=(long long ) max/i; j++)
                sangnt[i*j]=1;
       }
    for(i=0; i<n; i++)
          xuly(a[i]);
    printf("%lld",tong);
   
}