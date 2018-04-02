#include<stdio.h>


int big(int arr[200],int first,int last,int x,int N){
	if(last>=first){
	int mid=(first+last)/2;

	if((mid==0 || arr[mid-1]<x) && arr[mid]==x)
		return mid;
	else if(arr[mid]<x)
		return big(arr,mid+1,last,x,N);
	else
		return big(arr,first,mid-1,x,N);

	}

	return -1;

}

int end(int arr[200],int first,int last,int x,int N){
	if(last>=first){
		int mid=(first+last)/2;

		if((mid==N-1|| arr[mid+1]>x) && arr[mid]==x)
			return mid;
		else if(x<arr[mid])
			return end(arr,first,mid-1,x,N);
		else
			return end(arr,mid+1,last,x,N);
	}

	return -1;
}

int count(int arr[200],int x,int N){
	int first=0;
	int last=N-1;
	int i=big(arr,first,last,x,N);
	printf("first = %d\n",i);
	if(i==-1)
		return -1;


	int j=end(arr,first,last,x,N);
	printf("last = %d \n",j);

	return j-i+1;
}

int main(){

	int N,x;
	scanf("%d %d",&N,&x);

	int num[200];

	for(int i=0;i<N;i++)
		scanf("%d",&num[i]);

	int c=count(num,x,N);

	printf("%d\n",c);



}