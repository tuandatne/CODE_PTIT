#include<stdio.h>
#include<string.h>
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
      {
      	char kitu;
          int n=0,a,demchan=0,demle=0;
          kitu=' ';
          while (kitu!='\n')
            {
                scanf("%d",&a);
                n++;
                if (a%2 == 0)
                 demchan++;
                else
                  demle++;
                kitu=getchar();
             }
            if (n % 2 == 0)
              {
                  if (demchan>demle)
                    printf("YES\n");
                else
                  printf("NO\n");
              }
            else
               {
                   if (demle>demchan)
                     printf("YES\n");
                    else
                      printf("NO\n");
               }
      }
}