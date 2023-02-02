#include<stdio.h>
int kiemtra(long n)
{
    long m,dao=0,k,tong=0;
    m=n;
    while (n!=0)
      {
          k=n%10;
          dao=dao*10+k;
          if (k==4)
             return 0;
        tong=tong+k;
        n=n/10;
      }
    if (tong % 10==0 && dao==m)
        return 1;
    else
       return 0; 
}
int main ()
{
    long i,t,n,j,dau,cuoi;
    dau=0;
    cuoi=0;
    scanf("%ld",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld",&n);
          dau=1;
          cuoi=9;
          for(j=1; j<=n-1; j++)
            {
                dau=dau*10;
                cuoi=cuoi*10+9;
            }  
          for(j=dau; j<=cuoi; j++)
            if (kiemtra(j)==1)
              printf("%ld ",j);
        printf("\n");
      }
}