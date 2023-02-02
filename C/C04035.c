#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+10];
    int b[n+10];
    int tonglen=0,tongxuong=0,minlen=100000,minxuong=100000;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
        tonglen+=a[i];
        tongxuong+=b[i];
        if(minlen>a[i]) minlen=a[i];
        if(minxuong>b[i]) minxuong=b[i];
    }   
    if(minlen+tongxuong>minxuong+tonglen) printf("%d",minlen+tongxuong);
    else printf("%d",minxuong+tonglen);


    return 0;
}