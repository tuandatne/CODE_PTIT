#include<stdio.h>
#include<string.h>
int main ()
{
    char xau[100];
    gets(xau);
    int i,dem2=0,dem3=0,dem5=0,dem7=0;
    for(i=0; i<strlen(xau); i++)
      {
          if (xau[i]=='2')
            dem2++;
          if (xau[i]=='3')
            dem3++;
          if (xau[i]=='5')
            dem5++;
          if (xau[i]=='7')
            dem7++;
      }
      int check2=1, check3=1, check5=1, check7=1;
        for(i=0; i<strlen(xau); i++)
          {
              if ((xau[i]=='2') && (check2==1))
                {
                    printf("2 %d\n",dem2);
                    check2=0;
                }
            if ((xau[i]=='3') && (check3==1))
                {
                    printf("3 %d\n",dem3);
                    check3=0;
                }
             if ((xau[i]=='5') && (check5==1))
                {
                    printf("5 %d\n",dem5);
                    check5=0;
                }
             if ((xau[i]=='7') && (check7==1))
                {
                    printf("7 %d\n",dem7);
                    check7=0;
                }
             
          }
}