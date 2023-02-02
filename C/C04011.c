#include<stdio.h>
int main ()
{
    int t,i,n;
    long long a[1000];
    scanf("%d",&t);
    while (t--)
      {
          scanf("%d",&n);
          for(i=1; i<=n; i++)
             scanf("%lld",&a[i]);
          long long  dem=1;
          for(i=2;i<=n; i++)
            {
              int check=1;
              for(int j=i-1; j>0; j--)
                if (a[j]>a[i])
                  {
                    check=0;
                    break;
                  }
              if (check==1)
                 dem++;
            }  
        printf("%lld\n",dem);         
      }
}