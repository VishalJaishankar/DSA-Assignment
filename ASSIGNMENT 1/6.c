#include<stdio.h>
void modprod(int N,int C,int P);
int main(){
	int N,C,P;
	scanf("%d %d %d",&C,&N,&P);

	modprod(C,N,P);
	return 0;
}
void modprod(int c,int n,int p){
	unsigned long long temp=1;

	for(int i=1;i<=n;i++){		//need to calculate c^n
			temp*=c;
			temp=temp%(unsigned long long int )p;
	}

	printf("%llu\n",temp);


}