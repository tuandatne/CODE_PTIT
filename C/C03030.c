#include<stdio.h>
int kiemtra(long long n)
{
    int tr,k;
    tr=n%10;
    n=n/10;
    while (n!=0)
      {
          k=n%10;
          n=n/10;
          if (k>tr)  return 0;
          tr=k;
      }
    return 1;
}
int main ()
{
    int t,i,n,j;
    long long dau,cuoi;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%d",&n);
          dau=0;
          cuoi=0;
          for(j=0; j<n; j++)
            {
                dau=dau*10+1;
                cuoi=cuoi*10+9;
            }
         // printf("%lld   %lld",dau,cuoi);
         for(j=dau; j<=cuoi; j++)
            if (kiemtra(j)==1)
              printf("%lld ",j);
        printf("\n");
      }
}