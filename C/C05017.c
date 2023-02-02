#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	int m,n;
	scanf("%d %d",&m,&n);
	int c[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&c[i][j]);
		}
	}
	int h1=0,h2=m-1,c1=0,c2=n-1;
	while(h1<=h2&&c1<=c2){
	for(int i=c1;i<=c2;i++){
		printf("%d ",c[h1][i]);
	}
	h1++;
	for(int i=h1;i<=h2;i++){
		printf("%d ",c[i][c2]);
	}
	c2--;
	if(h1<=h2){
	for(int i=c2;i>=c1;i--){
		printf("%d ",c[h2][i]);
	}
}
	h2--;
	if(c1<=c2){
		for(int i=h2;i>=h1;i--){
			printf("%d ",c[i][c1]);
		}
	}
	c1++;
	}
	printf("\n");
}
	return 0;
}
	
