#include<stdio.h>
int main ()
{
    int n,i,j,k,a[100][100];
    scanf("%d",&n);
    k=0;
    int t,d=0, hang=n-1, cot=n-1;
    if (n%2==0)
      t=n/2;
    else
      t=n/2+1;
    while (d != t)
      {
          for(i=d; i<=cot; i++)   //hang ngang dau tien
              {
                  k++;
                  a[d][i]=k;
              }
        for(i=d+1; i<=hang; i++) //hang doc cuoi cung
            {
                k++;
                a[i] [cot]=k;
            }
        for(i=cot-1; i>=d; i--) //hang ngang cuoi cung
          {
              k++;
              a[hang][i]=k;
          }
        for(i=hang-1; i>=d+1; i--)//hang doc daun tien
          {
              k++;
              a[i][d]=k;
          }
       cot=cot-1;
       hang=hang-1;
       d=d+1;
      }
    for(i=0; i<n; i++)
      {
          for(int j=0; j<n; j++)
            printf("%d ",a[i] [j]);
        printf("\n");
      }
}