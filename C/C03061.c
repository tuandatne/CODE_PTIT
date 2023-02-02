#include<stdio.h>
#include<math.h>
void chayct(long long n)
{
    int mang[100];
    int dem=0,i;
    while (n!=0)
      {
          dem=dem+1;
          mang[dem]=n%10;
          n=n/10;
      }
    if (mang[1]*2==mang[dem] || mang[dem]*2==mang[1])
       {
           dem=dem-1;
           int check=1;
           for(i=2; i<= dem/2; i++)
             {
                 if (mang[i]!=mang[dem-i+2])
                   {
                       check=0;
                       break;
                   }
             }
            if (check==1)
              printf("YES\n");
            else
              printf("NO\n");
       }
    else
       printf("NO\n");
}
int main ()
{
    int i,t;
    long long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&n);
        chayct(n);
    }
}