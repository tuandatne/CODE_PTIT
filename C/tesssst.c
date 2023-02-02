#include<stdio.h>
#include<string.h>
int main ()
{
	char c[100];
	int i,t;
	scanf("%d",&t);
	for(i=0; i<t; i++)
	  {
	  // fgets(c, sizeof(c),stdin);
	  scanf("%s",c);
	   printf("%s",c);
	  }
}