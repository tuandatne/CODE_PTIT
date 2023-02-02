#include<stdio.h>
#include<string.h>
int main ()
{
    char xau[50];
    int i,check,t,j;
    scanf("%d",&t);
     for(j=0; j<t; j++)
       {
           scanf("%s",xau);
          // scanf("\n");
            check=1;
           for (i=0; i<strlen(xau)-1; i++)
                 
                    if (xau[i]>xau[i+1])
                     {
                      check=0;
                       break;
                    }
                  
          if (check==1) 
              printf("YES\n");
           else
              printf("NO\n");
       }
}