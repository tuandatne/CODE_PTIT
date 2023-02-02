#include<stdio.h>
int kiemtrasogiam(long n)
{
    int k,tr;
    tr=n%10;
    n=n/10;
    while (n!=0)
      {
          k=n%10;
          if (tr>=k)
            return 0;
          n=n/10;
          tr=k;
      }
    return 1;
}
int main ()
{
      long i,a,b,t,j,dem;
      scanf("%ld",&t);
      for (i=0; i<t; i++)
         {
             dem=0;
             scanf("%ld%ld",&a,&b);
             for (j=a; j<=b; j++)
                if (kiemtrasogiam(j)==1)
                  dem++;
            printf("%ld\n",dem);
         }
}