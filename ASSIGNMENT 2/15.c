#include<stdio.h>
#include<math.h>

int getDigits(int n){
	int d=0;
	for(int i=1;i<n;i*=10,d++){

	}
	return d;
	//printf("%d\n",d);
}

int von(int n){
	int N=n;//copy to N
	if(getDigits(n)%2==0){
		int k=getDigits(n)/2;
		n=n*n;
		n=n/pow(10,k);
		n=n%(int)pow(10,2*k);

		return n;
	}
	else{
			
			n=n*n;//square and store
	if(getDigits(n)%2==0){//after squaring if the number of digits are even
		int k =(getDigits(N)/2)+1;//step plus 1
		n=n/(int )pow(10,k);
		n=n%(int)pow(10,getDigits(N));
		return n;
		}
	

	else{
		int k=getDigits(N)/2;
		n=n/(int)pow(10,k);
		n=n%(int)pow(10,getDigits(N));
		return n;
		}

	}


}

int main(){
	int seed;
	scanf("%d",&seed);

	int num;
	scanf("%d",&num);

	
	while(num--){
		int l=von(seed);
		printf("%d\n",l);
		seed=l;

	}



}