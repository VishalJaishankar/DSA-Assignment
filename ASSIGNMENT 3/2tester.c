#include<stdio.h>

int merge(int a [100],int temp[100],int left ,int mid,int right){

	int inver=0;
	int i=left;
	int j=mid;
	int k=left;


	while(i<mid && j<=right){
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else{
			inver+=mid-i;
			temp[k++]=a[j++];
		}
	}

	while(i<=mid-1)
		temp[k++]=a[i++];
	while(j<=right)
		temp[k++]=a[j++];


	for(int i=left;i<=right;i++)
		a[i]=temp[i];


	return inver;


}

int mergeSort(int a[100],int temp[100],int left,int right){
	int inver=0;
	if(left<right){
		int mid=(left+right)/2;

		inver=mergeSort(a,temp,left,mid);
		inver+=mergeSort(a,temp,mid+1,right);
		inver+=merge(a,temp,left,mid+1,right);

	}
	return inver;

}

int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	}


	int temp[100];

	int ans=mergeSort(a,temp,0,n-1);
	printf("%d\n",ans);
}