#include<stdio.h>
#include<math.h>
int main ()
{
    int mang[100];
    int a,b,j,i,max1;
    scanf("%d%d",&a,&b);
    max1=((a+b)+abs(a-b))/2;
    for(i=1; i<=20; i++)
       mang[i]=i+96;
    for(i=1; i<=a; i++)
      {
          if (i>=b)
           {
             for(j=1; j<=b; j++)
               {
                   printf("%c",mang[max1-j+1]);
               }
           }
        else  
          {
              for(j=1; j<=i-1; j++)
                printf("%c", mang[max1-j+1]);
              for(j=1; j<=b-i+1; j++)
                 printf("%c",mang[max1-i+1]);
          }
        printf("\n");
      }
}