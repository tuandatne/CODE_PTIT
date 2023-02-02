#include<stdio.h>
#include<math.h>
void quicksort(long int l, long int  r,long int *a)
{
   long int i,j,mid,tg;
   mid=a[ (l+r) / 2];
   i=l;
   j=r;
   while (i<=j)
     {
      while(a[i]>mid)
        i++;
      while (a[j]<mid)
         j--;
      if (i<=j) 
      {
         tg=a[i];
         a[i]=a[j];
         a[j]=tg;
         i++;
         j--;
      }
     }   
    if (l<j)  quicksort(l,j,a);
    if (i<r) quicksort(i,r,a);
}
int main ()
{
    long i,t,j,n;
    long a[1000],mang[1000];
    scanf("%ld",&t);
    for(i=0; i<t; i++)
      {
          scanf("%ld",&n);
          for(j=1; j<=n; j++)
             scanf("%ld",&a[j]);
        int dem=0;
        for(j=1; j<=n-1; j++)
          {
              int check=1;
              for(int k=j+1; k<=n; k++)
                 if (a[k]>=a[j])
                   {
                       check=0;
                       break;
                   }
            if (check==1)
             {
               dem++;
               mang[dem]=a[j];
             }
          }
        dem++;
        mang[dem]=a[n];
        long int  *ptr=mang;
        quicksort(1,dem,ptr);
        for(int k=1; k<=dem; k++)
          printf("%d ",*(ptr+k));
        printf("\n");
      }
}