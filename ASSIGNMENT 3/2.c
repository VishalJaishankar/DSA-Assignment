	#include<stdio.h>

int merge(int a[100],int temp[100],int left,int mid,int right){
	int i=left;//will traverse the left part
	int j=mid;	////right side
	int k=left;	//to store in the temp array
	int inver_count=0;
	while(i<=mid-1 && j<=right){
		if(a[i]<=a[j])
			temp[k++]=a[i++];
		else{
			inver_count+=(mid-i);//if a[i] i greater than a[j] then all number above a[i] will be too
			temp[k++]=a[j++];
		}
	}

		while(i<=mid-1){
			temp[k++]=a[i++];
		}
		while(j<=right){
			temp[k++]=a[j++];
		}

		for(int i=left;i<=right;i++)
			a[i]=temp[i];

		return inver_count;

}

int mergerSort(int a[100],int temp[100],int left,int right){
	int inver_count=0;
	int mid;
	if(left<right){
		mid=(left+right)/2;
		inver_count=mergerSort(a,temp,left,mid);
		inver_count+=mergerSort(a,temp,mid+1,right);
		inver_count+=merge(a,temp,left,mid+1,right);	
	}
	return inver_count;


}
int main(){

	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int temp[100];
	int inver=mergerSort(a,temp,0,n-1);

	printf("%d\n",inver );

}