#include<stdio.h>
#include<math.h>
int check(long n)
{
    if (n==2 || n==3 ||  n==5 || n==7)
        return 1;
    return 0;
}
int snt(int n)
{
  if (n <= 1)
    return 0;
  if (n <= 3)
    return 1;

  if (n % 2 == 0 || n % 3 == 0)
    return 0;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return 0;

  return 1;
}

int kiemtratungso( long n)
{
    int k;
    while (n!=0)
      {
          k= n % 10;
          n/=10;
          if(check(k)==0)
              return 0;
      }
    return 1;
}
int kiemtratongchuso(long n)
{
    int tong=0;
    while (n!=0)
      {
          tong+= n % 10;
          n/=10;
      }
    if (snt(tong))
       return 1;
    else
       return 0;
}
int main ()
{
    int i,t;
    long dau,cuoi;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld %ld",&dau,&cuoi);
        long  dem=0;
        for( long j=dau; j<=cuoi; j++)
            if(  kiemtratongchuso(j) && kiemtratungso(j)  && snt(j))
               dem++;
        printf("%ld\n",dem);
    }
}