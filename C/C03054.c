#include<stdio.h>
void chayct(long long n)
{
    int dem=0,k,check=1,i;
    int mang[100];
    while (n!=0)
    {
        k=n%10;
        n=n/10;
        switch (k)
        {
          case 0:
            {
             dem=dem+1;
             mang[dem]=0;
            }
             break;
          case 1:
            {
              dem=dem+1;
              mang[dem]=1;
            }
              break;
           case 8:
             {
               dem=dem+1;
               mang[dem]=0;
             }
               break;
           case 9:
             {
               dem=dem+1;
                mang[dem]=0;
             }
             break;
        default:
        {
            check=0;
            break;
        }
            break;
        }
    }
    if (check==0)
       printf("INVALID\n");
    else
       {
           while (mang[dem]==0)
               dem--;
            if (dem==0)
               printf("INVALID\n");
            else
            {
              for(i=dem; i>=1; i--)
                printf("%d",mang[i]);
            printf("\n");
            }
       }
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
//          printf("\n");
      }
}