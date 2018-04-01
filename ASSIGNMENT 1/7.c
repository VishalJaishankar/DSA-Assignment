#include<stdio.h>
void bin(unsigned long long n);
int main(){
	unsigned long long  n;
	scanf("%llu",&n);
	bin(n);

	return 0;
}
void bin(unsigned long long n){
		int count=0;
	while(n){
		int temp=(int)n%2;//take the modulo
		if(temp==1) count++;	//check if it is 1
		n=n/2;		

	}
	printf("%d",count);
}