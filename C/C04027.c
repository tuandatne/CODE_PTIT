#include<stdio.h>
int main ()
{
	int n,tg,i,min,j,dem=0,a[1000];
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	   scanf("%d",&a[i]);
	for(i=1; i<n; i++)
	  {
		  min=i;
		  for(j=i+1; j<=n; j++)
		    if (a[j]<a[min])
			    min=j;
		  tg=a[i];
		  a[i]=a[min];
		  a[min]=tg;
		  printf("Buoc %d: ",i);
		  for(int k=1; k<=n; k++)
			   printf("%d ",a[k]);
	  	  printf("\n");
		}
}

