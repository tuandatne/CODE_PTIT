#include<stdio.h>
int main ()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int x[100] [100];
    for(i=0; i<b; i++)
    {
         for(int j=0; j<a; j++)
           x[i] [j]=32;
    }
    for(i=0; i<a; i++)
      {
          x[0] [i]=42;
          x[b-1] [i]=42;
      }
    for (i=1; i<b-1; i++)
      {
          x[i] [0]=42;
          x[i] [a-1]=42;
      }
     for(i=0; i<b; i++)
       {
         for(int j=0; j<a; j++)
           printf("%c",x[i] [j]);
        printf("\n");       
      }
   
}