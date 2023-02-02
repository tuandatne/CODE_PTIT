#include<stdio.h>
#include<math.h>
int timmax(int a, int b, int c, int d)
{
     int max;
     max=a;
     if (b>max)
        max=b;
    if (c>max)
        max=c;
    if (d>max)
        max=d;
    return max;
}
int main ()
{
    int a,b,c,d,x,y,z,t;
    int dodai1,dodai2,dodai;
    scanf("%d%d%d%d\n",&a,&b,&c,&d);
    scanf("%d%d%d%d",&x,&y,&z,&t);
    dodai1=timmax(abs(a-c), abs(b-d), abs(x-z), abs(y-t));    
    dodai2=timmax(abs(y-d),abs(b-t), abs(a-z), abs(x-c));
    dodai=((dodai1+dodai2)+abs(dodai1-dodai2))/2;
    printf("%lld",dodai*dodai);
}