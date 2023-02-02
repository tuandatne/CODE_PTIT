#include<stdio.h>
int a[1000],b[1000];
void sapxepa(int n)
{
    int i,j,tg;
    for(i=1; i<n; i++)
       {
           for(j=i+1; j<=n; j++)
             if (a[i]>a[j])
               {
                   tg=a[i];
                   a[i]=a[j];
                   a[j]=tg;
               }
       }
}
void sapxepb(int n)
{
    int i,j,tg;
    for(i=1; i<n; i++)
       {
           for(j=i+1; j<=n; j++)
             if (b[i]<b[j])
               {
                   tg=b[i];
                   b[i]=b[j];
                   b[j]=tg;
               }
       }
}
int main ()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
      {
          scanf("%d",&n);
          for(i=1; i<=n; i++)
              scanf("%d",&a[i]);
          for(i=1; i<=n; i++)
              scanf("%d",&b[i]);
          sapxepa(n);
          sapxepb(n);
          int dem1=0,dem2=0;
          printf("Test %d:\n",k);
          for(i=0; i<n*2;i++)
            {
                if (i%2 == 0)
                 {
                     dem1++;
                     printf("%d ",a[dem1]);
                     
                 }
                else
                  {
                      dem2++;
                      printf("%d ",b[dem2]);
                    
                  }
            }
        printf("\n");
      }
}