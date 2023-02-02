#include<stdio.h>
#include <float.h>
#include<math.h>
int main ()
{
  
int Digs = DECIMAL_DIG;
double OneSeventh = 1.0/7.0;
printf("%.*e\n", Digs, OneSeventh);
// 1.428571428571428492127e-01
}