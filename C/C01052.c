#include<stdio.h>
#include<math.h>
void chayct(int n)
{
    int i,k,dem=0;
    for(i=1;i<=sqrt(n); i++)
       {
           if (n%i==0)
              {
                  k= (int) n/i;
                if (k==i)
                  {
                     if (k%2==0)
                       dem++;
                  }
                else
                    {
                        if (k % 2 ==0)
                           dem++;
                        if (i % 2 ==0)
                           dem++;
                    }
              }
       }
    printf("%d\n",dem);
}
int main ()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%d",&n);
          chayct(n);
      }
}