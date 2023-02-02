 #include<stdio.h>
 #include<math.h>
 int main ()
 {
 int i,n,check=1;
    scanf("%d",&n);
    if (n<2) check=0;
    for(i=2; i<=( int )sqrt(n); i++)
      {
          if(n%i==0)
            {
                check=0;
                break;
            }
      }
    if(check==1)
      printf("YES");
    else
      printf("NO");
 }