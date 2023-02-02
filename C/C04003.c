#include<stdio.h>
int main ()
{
    int i,t,j,n;
    long mang[10000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%d",&n);
          for(j=0; j<n; j++)
            scanf("%ld",&mang[j]);
         int check=1;
          for(j=0; j<= n/2 ; j++)
            {
                if (mang[j]!=mang[n-j-1])
                  {
                      check=0;
                      break;
                  }
            }
        if (check==1)
          printf("YES\n");
        else
           printf("NO\n");
      }
}