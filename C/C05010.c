#include<stdio.h>
#include<math.h>
int snt(int n)
{
    int i;
    if (n<2)
       return 0;
    for(i=2; i<=sqrt(n); i++)
      if (n%i==0)
         return 0;
    return 1;
}
int main ()
{
    int n,i,j,a[50][50];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
      for(j=1; j<=n; j++)
        scanf("%d",&a[i] [j]);
    int tong=0;
    for(i=1; i<=n; i++)
      {
          for(j=i; j<=n; j++)
            if (snt(a[i][j])==1)
              tong=tong+a[i][j];
      }
    printf("%d\n",tong);
}