#include<stdio.h>
#include<string.h>
int check(char ch)
{
    if (ch=='2' || ch=='3' || ch=='5' || ch=='7')
       return 1;
    else
       return 0;
}
int main ()
{
    int i,t;
    char xau[1000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
      scanf("\n");
      gets(xau);
      int n=strlen(xau);
      int check1=1;
        for(int j=0;j<=(int )n/2; j++ )
            {
          if ((xau[j]!=xau[n-j-1]) || (check(xau[j])==0) || (check(xau[n-j-1])==0))
                {
                    check1=0;
                    break;
                }
             }
    if (check1)
    printf("YES\n");
    else
      printf("NO\n");
     }
}
