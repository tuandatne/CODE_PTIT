#include<stdio.h>
#include<math.h>

int main ()
{
    int i,j,a,b,max1;
  
    scanf("%d%d",&a,&b);
    max1=((a+b)+abs(a-b))/2;
    for(i=max1;i>max1-a;i--)
      {
      if (i>=b)
          for(j=i; j>i-b; j--)
            printf("%d",j);
      else
       {
         for(j=i;j>0;j--)
            printf("%d",j);
          for(j=2;j<=b-i+1; j++)
             printf("%d",j);
        }  
       printf("\n");
      }
}