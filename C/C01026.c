#include<stdio.h>
#include<math.h>
int main ()
{
    int t,i,check;
    long long n;
    scanf("%d",&t);
    for (i=0; i<t; i++)
      {
        scanf("%lld",&n);
        check=1;
        if (n==2 || n==3)
             check=1;
        else
        {
            if (n==1)
            {
               check=0;
            }
            else
              for(long long j=2; j<=(int) sqrt(n);j++)
              {
                  if (n%j==0)
                  {
                      check=0;
                      break;
                  }
              }
                 
        }
    if (check==0)
       printf("NO\n");
    else
       printf("YES\n");
      }
}