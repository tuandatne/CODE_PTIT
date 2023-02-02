#include<stdio.h>
#include<math.h>
void doicho(int *a, int *b)
{
   int tg;
   tg=*a;
   *a=*b;
   *b=tg;
}
int check(int y)
{
   int t;
   t=(int ) sqrt(y);
   if (t*t!=y)
      return 0;
   else
      return t;

}
int main ()
{ 
   int a,b,c,d,e,f,dt;
   scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
   dt=a*b+c*d+f*e;
   if (check(dt)==0)
      {
         printf("NO");
         return 0;
      }
   dt=check(dt);
   if(a>b)
      doicho(&a,&b);
   if(c>d)
      doicho(&c,&d);
   if(e>f)
     doicho(&e,&f);
   if (d==dt)
     {
        doicho(&a,&c);
          doicho(&b,&d);
     }
   if(f==dt)
     {
          doicho(&a,&e);
          doicho(&b,&f);
     }
   if (b==dt)
      {
         a=dt-a;
         if((a==c && c==e) || (a==c &&c==f) || (a==d && d==e)  || (a==d && d==f))
               printf("YES");
         else
            printf("NO");
      }
   else
      printf("NO");
}