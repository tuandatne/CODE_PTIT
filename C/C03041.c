#include<stdio.h>
#include<math.h>
int main ()
 {
     int t,i,a,b,c,d;
     scanf("%d",&t);
     for(i=0; i<t; i++)
        {
            scanf("%d%d%d%d",&a,&b,&c,&d);
            if (abs(c-a)==abs(b-d))
               printf("YES\n");
            else
               printf("NO\n");
        }
 }