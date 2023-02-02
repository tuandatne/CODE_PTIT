#include<stdio.h>
#include<string.h>

void dao(int a[],int n)
 {
    int i=0,j=n-1;
    while(i<j)
	 {
	     int tmp=a[i];
	    a[i]=a[j];
	    a[j]=tmp;
	    i++;
	    j--;
     }
}
void daonguoc(int a[],int n)
{
  int nguoc=0,xuoi=n-1;
while(nguoc<xuoi)
{
	int temp=a[nguoc];
	a[nguoc]=a[xuoi];
	a[xuoi]=temp;
	++nguoc;
	--xuoi;
}
}
void nhap1(char a[],char b[]){
	int n1=strlen(a),n2=strlen(b);
	int x[n1],y[n1],z[n1];
	for(int i=0;i<n1;i++){
		x[i]=a[i]-'0';
	}
	for(int i=0;i<n2;i++){
		y[i]=b[i]-'0';
	}
	daonguoc(x,n1);
	daonguoc(y,n2);
	for(int i=n2;i<n1;i++){
		y[i]=0;
	}
	int n=0,nho=0;
	for(int i=0;i<n1;i++){
	int tmp=x[i]-y[i]-nho;
	if(tmp<0){
		nho=1;
		z[n++]=10+tmp;
	}else{
		z[n++]=tmp;
		nho=0;
	}
	}
	int ok=0;
	for(int i=n-1;i>=0;i--){
		if(ok==0&&z[i]){
			ok=1;
		}
		if(ok) printf("%d",z[i]);
	}
	if(ok==0) printf("0");
}

void nhap2(char a[],char b[])
{
	int n1=strlen(a),n2=strlen(b);
	int x[n1],y[n1],z[n1+1];
	for(int i=0;i<n1;i++) x[i]=a[i]-'0';
	for(int i=0;i<n2;i++) y[i]=b[i]-'0';
	dao(x,n1);
	dao(y,n2);
	for(int i=n2;i<n1;i++) y[i]=0;
	int n=0,nho=0;
	for(int i=0;i<n1;i++)
	{
	    int tmp=x[i]+y[i]+nho;
	    z[n++]=tmp%10;
	    nho=tmp/10;
	}
	if(nho) z[n++]=nho;
	for(int i=n-1;i>=0;i--)
	 printf("%d",z[i]);
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	while(t--){
	char c[500],d[500];
	scanf("%s %s",c,d);
	if(strlen(c)>=strlen(d)){
		nhap2(c,d);
	}else{
		nhap2(d,c);
	}
	printf(" ");
    if(strlen(c)>strlen(d)||strlen(c)==strlen(d)&&strcmp(c,d)>0){
		nhap1(c,d);
	}else{
		nhap1(d,c);

	}
    printf("\n");
    }
	return 0;

}
mat troi em la  nang lam da anh den
tre trau thich co non va choi do co
|\\\\
Lam da anh __DBL_DENORM_MIN__\
hahddhk fdfhfk keoeheonnnfeoheohdbkdbf nkjdfhnfjdnfkdnfdnf dfhdjhefndfdnfdkfjdhfsosjiefhjeifnefhjnjfhdkfhdihddjhfskhfskfsdkh;sfsknfknfkdhHkam da anh den  
ndndfnfdkfkdfkdfhdkfdkfhdfk 
Hihi dkhsdhfsfbndfnbdfnbs,mfbndsfsddoijoijfdfjfjdlfjdfldjfldjfsdlsfdd