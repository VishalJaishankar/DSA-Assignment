#include<stdio.h>

void merge(int a[100],int temp[100],int left,int mid,int right){
	int i=left;
	int j=mid;
	int k=left;
	while(i<mid && j<=right){
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];

	}

	while(i<mid)
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

int binserch(int a[100],int key,int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		if(a[mid]==key)
			return 1;
		else if(a[mid]>key)
			binserch(a,key,start,mid-1);
		else 
			binserch(a,key,mid+1,end);

	}
	return 0;
}

int main(){
	int n;
	int x;
	scanf("%d %d",&n,&x);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int temp[100];
	mergeSort(a,temp,0,n-1);

//	for(int i=0;i<n;i++)
//		printf("%d",a[i]);
	
	int diff;
	for(int i=0;i<n;i++){
		int diff=x-a[i];

		if(binserch(a,diff,i+1,n-1)){
		//search the array from the next element till last
			printf("YES\n");
			return 0 ;
		}

	}
	printf("No\n");




}