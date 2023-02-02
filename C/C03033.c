#include<stdio.h>
#include<math.h>
int snt(long n)
 {
    long i,check=1;
    if (n<2) check=0;
    for(i=2; i<=( long )sqrt(n); i++)
      {
          if(n%i==0)
            {
                check=0;
                break;
            }
      }
     return check;
 }
void chayct(long n)
{
    if (snt(n)==1)
       printf("%ld^1",n);
    else
       {
           long i,dem1;
           i=2;
           dem1=0;
           while (i<=n)
            {
             if (snt(i)==1)
               {
                   long dem=0;
                   if (n%i==0)
                     dem1++;
                   while (n%i==0)
                     {
                         dem++;
                         n=n/i;

                     }
                    if (dem!=0)
                      {
                       if(dem1==1)
                          printf("%ld^%ld ",i,dem);
                       else
                           printf("* %ld^%ld ",i,dem);
                       } 
                    if (snt(n)==1)
                      {
                       printf("* %ld^1 ",n);
                       break;
                      }
                      
               }
            i=i+1;
            }    
         }   
}
int main ()
{
    int i,t;
    long n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld",&n);
          printf("%ld = ",n);
          chayct(n);
          printf("\n");
      }
}