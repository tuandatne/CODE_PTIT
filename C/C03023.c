#include<stdio.h>
int a[100];
int kiemtra(int n)
{
      int k,m=0,check1=1,check2=1;
      while (n!=0)
        {
            k=n%10;
            if (k==9)
               {
                   check1=0;
                   break;
               }
            n=n/10;
            m++;
            a[m]=k;
        }
    if (check1==0)
       return 0;
    for(int i=1; i<=(m/2); i++)
       {
           if (a[i]!=a[m-i+1])
             {
                 check2=0;
                 break;
             }
       }
    if(check2==0)
        return 0;
    else
       return 1;
}
int main ()
{
    int i,n,dem=0;
    scanf("%d",&n);
    for(i=2; i<n; i++)
       {
           if (kiemtra(i))
             {
                 printf("%d ",i);
                 dem++;
             }
       }
    printf("\n");
    printf("%d",dem);
}