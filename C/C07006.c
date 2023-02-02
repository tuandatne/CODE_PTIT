#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    double d1,d2,d3;
    double Ax, Ay, Bx, By, Cx, Cy;
    scanf("%d", &t);
    while (t--)
    {
    	scanf("%lf %lf %lf %lf %lf %lf", &Ax, &Ay, &Bx, &By, &Cx, &Cy);
    	 d1 = ( double ) sqrt( pow(Ax - Bx,2) +  pow(Ay - By,2) );
    	 d2 = ( double ) sqrt( pow(Bx - Cx,2) +  pow(By - Cy,2) );
    	 d3 = ( double ) sqrt( pow(Cx - Ax,2) +  pow(Cy - Ay,2) );
    	if (d1 + d2 <= d3 || d1 + d3 <= d2 || d2 + d3 <= d1)
           printf("INVALID\n");
        else
          {
             double p = (double) (d1 + d2 + d3) / 2;
             printf("%0.2lf\n", (double )sqrt(p * (p - d1) * (p - d2) * (p - d3)));
          }
     }
}