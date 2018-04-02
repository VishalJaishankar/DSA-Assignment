#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(int a[1000],int n){

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");

}

void store(int lower[200],int upper[200],int n,int m){
	
	int accu[1000];//accumulates all the intervals
	int count=0;//used to store int the accu and has the number of elements
	for(int i=0;i<n;i++){
		int p=lower[i];
		while(p<=upper[i]){
				accu[count++]=p;
				p++;
		}
	}

	printf("after putting all intervals the array\n");

	for(int i=0;i<count;i++)//debugger
		printf("%d ",accu[i]);

	sort(accu,count);
	

	printf("mth smallest:%d",accu[m]);

}


int main(){

	int N;//hold the number of intervals
	int m;
	scanf("%d %d",&N,&m);

	int lower[100];
	int upper[100];
		printf("Type the lower bound:\n");
	for(int i=0;i<N;i++)
		scanf("%d",&lower[i]);
	printf("type the upper bound\n");
	for(int i=0;i<N;i++)
		scanf("%d",&upper[i]);



	store(lower,upper,N,m);//sorts lower and 
}