#include<stdio.h>

void swap(int a[100],int src,int des){
	int temp=a[src];
	a[src]=a[des];
	a[des]=temp;
}

void partition(int a[100],int left,int right){
	while(left<right){
		if(a[left]%2==1){
			swap(a,left,right);
			right--;
		}
		else if(a[right]%2==0){
			swap(a,left,right);
			left++;
		}
		else{
			left++;
			right--;
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	partition(a,0,n-1);
	printf("after parttioning\n");

	for(int i=0;i<n;i++)
		printf("%d ",a[i] );
	printf("\n");
}