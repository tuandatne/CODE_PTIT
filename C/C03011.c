#include<stdio.h> 
int gt(int n)
{
    int k=1;
	if (n==0) k=1;
	else
	 {
	 	for (int i=1;i<=n;i++) k*=i;
	 }
	return k;
}
int strong(long a)
{
	long long b,m,s=0;
	b=a;
	while (a>=1)
	 {
	 	m=a%10;
	 	s+= gt(m);
	 	a/=10;
	 }
	if (s==b) return 1;
	else return 0;
}
int main()
{
	long long min1,max1,a,b;
	scanf("%lld%lld",&a,&b);
    min1=((a+b)-abs(a-b))/2;
    max1=((a+b)+abs(a-b))/2;
	for (long long c=min1;c<=max1;c++)
	 {
	 	if (strong(c)==1)
	 	{
	 		printf("%lld ",c);
		 }
	 }
}


