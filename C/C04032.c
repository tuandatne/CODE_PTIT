#include<stdio.h>
#include<math.h>
#include<string.h>
int kt(int n){
    int a[100],p=0;
    while(n!=0){
        a[p]=n%10;
        n/=10;
        p++;
    }
    for (int i=p-1;i>0;i--){
        if(a[i]>a[i-1]) return 0;
    }
    return 1;
}
int main(){
    int n=0;
    int a[10000],b[1000],c[1000];
    while(scanf("%d",&a[n])!=-1){
        n++;
    }
    int p=0;
    for(int i=0;i<n;i++){
        int dem=0;
        if(kt(a[i])==1){
            for(int j=0;j<p;j++){
                if(a[i]==b[j]) {c[j]++; dem=1;}
            }
            if(dem!=1){
                b[p]=a[i];
                c[p]++;
                p++;
            }
        }
    }
    for(int i=0;i<p;i++){
        for(int j=i+1;j<p;j++){
            if(c[i]<c[j]){
                int k=c[i];
                c[i]=c[j];
                c[j]=k;
                k=b[i];
                b[i]=b[j];
                b[j]=k;

            }
        }
    }
    for (int i=0;i<p;i++){
        printf("%d %d\n",b[i],c[i]);
    }
    return 0;
}