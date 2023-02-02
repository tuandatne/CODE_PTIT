#include<stdio.h>
#include<string.h>        
int main ()
{
  char xau[10000],*token,mang[100] [100];
  const char s[2]=" ";
  int b[100]={0};
  gets(xau);
  token=strtok(xau,s);
  int n=0,i;
  while (token)
    {
      n++;              
      strcpy(mang[n],token);
      token=strtok(NULL,s);
    }
  for( i=1; i<n; i++)
     {
       if (b[i]==0)
          for(int j=i+1; j<=n; j++)
             if (strcmp(mang[i],mang[j])==0)
                b[j]=1;
     }
  for(i=1; i<=n; i++)
    if (b[i]==0)
      printf("%s ",mang[i]);
}