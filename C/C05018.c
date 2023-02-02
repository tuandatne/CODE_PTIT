#include<stdio.h>
int a[100][100];
void xuli(int n)
{
    int d=0,hang=n-1,cot=n-1,i,j;
    int k=n*n+1;
    int t;
    if (n%2==0)
       t=n/2;
    else
      t=n/2+1;
    while (d!= t)
      {
          for(i=d; i<=cot; i++)// hang dau tien
            {
                k--;
                a[d][i]=k;
            }
        for(i=d+1; i<=hang; i++)// cot cuoi cung
            {
                k--;
                a[i][cot]=k;
            }
        for(i=cot-1; i>=d; i--)//hang cuoi cung
           {
               k--;
               a[hang][i]=k;
           }
        for(i=hang-1; i>=d+1; i--)//cot dau tien
          {
              k--;
              a[i][d]=k;
          }
        d=d+1;
        hang=hang-1;
        cot=cot-1;   
      }
      for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
              printf("%d ",a[i][j]);
            printf("\n");
        }

}
int main ()
{
    int i,t,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
       {
           scanf("%d",&n);
           printf("Test %d:\n",i);
           xuli(n);
       }
}