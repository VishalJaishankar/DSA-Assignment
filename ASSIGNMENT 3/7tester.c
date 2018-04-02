#include<stdio.h>

void merge(int a[100],int temp[100],int left,int mid,int right){
	int i=left;
	int j=mid;
	int k=left;

	while(i<=mid-1 && j<=right){
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=mid-1)
		temp[k++]=a[i++];
	while(j<=right)
		temp[k++]=a[j++];


	for(int i=left;i<=right;i++)
		a[i]=temp[i];


}

void mergeSort(int a[100],int temp[100],int left,int right){

	if(left<right){
		int mid=(left+right)/2;
		mergeSort(a,temp,left,mid);
		mergeSort(a,temp,mid+1,right);
		merge(a,temp,left,mid+1,right);
	}

}


int main(){

	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	int temp[100];
	mergeSort(a,temp,0,n-1);

	for(int i=0;i<n;i++)//debugger
		printf("%d ",a[i]);

	printf("\n");

	

}