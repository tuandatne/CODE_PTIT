#include<stdio.h>
int main ()
{
    int a[100],i,n;
    int *apr=a;
    scanf("%d",&n);
    for(i=0; i<n; i++)
      scanf("%d",&a[i]);
    int max=-99999;
    for(i=1; i<n; i++)
     if (*(apr+i)>max)
       max=*(apr+i);
    printf("%d",max);
}