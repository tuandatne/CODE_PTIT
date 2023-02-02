#include<stdio.h>
#include<math.h>
int kiemtra(int n)
{
    int tong=0;
    while (n!=0)
      {
          tong=tong+n%10;
          n=n/10;
      }
    if(tong % 5==0)
      return 1;
    else
       return 0;
}
int main ()
{
    int n,i,j,dem=0;
    scanf("%d",&n);
    int mang[100000]={0};
    mang[1]=1;
    for(i=2; i<=sqrt(n); i++)
       {
           for(j=2; j<= n/i; j++)
              mang[i*j]=1;
       }
  for(i=1; i<=n; i++)
    {
        if(mang[i]==0)
          {
              if(kiemtra(i)==1)
                {
                dem++;
                printf("%d ",i);
                }
          }
    }
  printf("\n");
  printf("%d",dem);
}