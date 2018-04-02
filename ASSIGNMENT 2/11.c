#include<stdio.h>


int main(){

	int N;
	scanf("%d",&N);

	int arr[200];
	
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}

	int last=N-1;
	int i=N-1;		//gets the index of element from right
	int j=0;		//gets the index of element from left


	int right;
	for(int p=last;p>=0;p--){
		if(arr[p]<arr[p-1]){	//p is the element to be swapped from right
			printf("%d ",arr[p]);		//print that number
			right=p;
			break;
		}
	}
	int left;
	for(int p=0;p<=last;p++){
		if(arr[p]>arr[p+1]){
			printf("%d \n",arr[p]);
			left=p;
			break;
		}
	}
	//left and right contains the indices
	printf("%d %d\n",left,right);

	return 0;

}