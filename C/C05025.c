#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int test,t=1;
    scanf("%d ",&test);
    while (test--){
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n+10][m+10];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                for(int k=i;k<=n;k++){
                    for(int l=j;l<=m;l++){
                        if(a[i][j]>a[k][l]){
                            int p=a[i][j];
                            a[i][j]=a[k][l];
                            a[k][l]=p;
                        }
                    }
                }
            }
        }
        printf("Test %d:\n",t);
        t++;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}