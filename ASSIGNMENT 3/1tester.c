#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int h[20000];
int c[20000];
int n;

int min(int a ,int b){
	return (a>b)?b:a;
}

int cost(int eq_h){
	int exp=0;
	for(int i=0;i<n;i++){
		exp+=abs(h[i]-eq_h)*c[i];
	}

	return exp;
}

int main(){

	scanf("%d",&n);

	for(int i=0;i<n;i++)
		scanf("%d",&h[i]);

	for(int i=0;i<n;i++)
		scanf("%d",&c[i]);

	int minCost=INT_MAX;

	for(int i=0;i<n;i++ ){
		minCost=min(minCost,cost(h[i]));
	}

	printf("%d\n",minCost);


}