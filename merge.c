#include<stdio.h>

void merge(int a[100],int temp[100],int start,int mid,int end){

	int i=start;
	int j=mid;
	int k=start;

	while(i<=mid-1 && j<=end){
		if(a[i]<=a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=mid-1)
		temp[k++]=a[i++];
	while(j<=end)
		temp[k++]=a[j++];

	for(int i=start;i<=end;i++)
		a[i]=temp[i];


}
void mergeSort(int a[100],int temp[100],int start,int end){

	if(start<end){
		int mid=(start+end)/2;

		mergeSort(a,temp,start,mid);
		mergeSort(a,temp,mid+1,end);
		merge(a,temp,start,mid+1,end);
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

	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}