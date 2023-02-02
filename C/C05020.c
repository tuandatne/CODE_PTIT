#include<stdio.h>
#include<math.h>
long long fbc[100];

void mangchuafbc(){
fbc[0]=0;
fbc[1]=1;
for(int i=2;i<=90;i++){
		fbc[i]=fbc[i-1]+fbc[i-2];
	}
}
int main(){
mangchuafbc();
int n;
scanf("%d",&n);
long long a[n][n],count=0;
int h1=0,h2=n-1,c1=0,c2=n-1;
while(h1<=h2&&c1<=c2){
	for(int i=c1;i<=c2;i++){
		a[h1][i]=fbc[count];
		count++;
	}
	h1++;
	for(int i=h1;i<=h2;i++){
		a[i][c2]=fbc[count];
		count++;
	}
	c2--;
	if(c1<=c2){
		for(int i=c2;i>=c1;i--){
			a[h2][i]=fbc[count];
			count++;
		}
	}
	h2--;
	if(h1<=h2){
		for(int i=h2;i>=h1;i--){
			a[i][c1]=fbc[count];
			count++;
		}
	}
	c1++;
}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
}
