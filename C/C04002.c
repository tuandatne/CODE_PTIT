#include<stdio.h>
#include<math.h>
int snt(int n)
{
    int check=1,i;
    if (n<2) check=0;
    for(i=2; i<=( int )sqrt(n); i++)
      {
          if(n%i==0)
            {
                check=0;
                break;
            }
      }
   return check;
}
int main ()
{
    int i,t,j,n,x;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%d",&n);
          for(j=0; j<n; j++)
            {
                scanf("%d",&x);
                if (snt(x)==1)
                  printf("%d ",x);
            }
          printf("\n");
      }
}