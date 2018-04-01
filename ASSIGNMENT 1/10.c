#include<stdio.h>
int res[500];


int multiply(int x,int resize){

	int carry=0;

	for(int i=0;i<resize;i++){

		int prod=x*res[i]+carry;

		res[i]=prod%10;
		carry=prod/10;
	}

		while(carry){
			 res[resize]=carry%10;
			 carry=carry/10;
			 resize++;
		}

		return resize;

}


void cal(int n){

	//carry=0;
	res[0]=1;
	int prod;
	int resize=1;
	for(int x=2;x<=n;x++)		//from 2 to the end multiply one by one till n
			resize=multiply(x,resize);

		 	for(int i=resize-1;i>=0;i--){
		 		printf("%d",res[i]);
		 	}
	



}


int main(){

	int N;
	scanf("%d",&N);
	cal(N);		



}

















	
	
		
	
	

	

	
	
		
	

	
	
	
	
	


