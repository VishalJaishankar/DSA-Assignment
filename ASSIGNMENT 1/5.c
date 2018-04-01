#include<stdio.h>
#include<math.h>
void modpow(int n);

int main(){
	int n;		//teh power required
	scanf("%d",&n);

	modpow(n);

	return 0;

}
void modpow(int n){
	unsigned long long temp=1;			//since temp will hold te 10 digits it has to be declared as long long
	for(int i=1;i<=n;i++){
		temp*=2;
		temp=temp%(unsigned long long)pow(10,10);		//type casting is required because you are going from small to big
	}
		printf("%llu",temp);			//remember the signature for unsigned long long is llu
}