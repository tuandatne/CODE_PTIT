#include<stdio.h>
#include<math.h>
int tongcs(long long n)
{
    int k;
    while (n!=0)
      {
          k=n%10;
          n=n/10;
          if (k==1 || k==4 || k==6 || k==8 || k==9 || k==0)
             return 0;
      }
    return 1;
}
int main ()
{
    int t;
    scanf("%d",&t);
    long long i,j,dau,cuoi,dem;
    char  a[1000000];
    for (i=1; i<=1000000; i++)
          a[i]=1;
    a[1]=0;
    for(i=2; i<= (long long )sqrt(1000000); i++)
       {
           for(j=i; j<=(long long ) 1000000/i; j++)
                a[i*j]=0;
       }
  /*  for(i=1;i<=500000; i++)
      if(a[i]==1)
        printf("%lld\n",i);*/
    for(i=0; i<t; i++)
      {
          dem=0;
          scanf("%lld%lld",&dau,&cuoi);
          for(j=dau; j<=cuoi; j++)
             if(a[j]==1 && tongcs(j)==1)
                dem++;
        printf("%lld\n",dem);
      }

}