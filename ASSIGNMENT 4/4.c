#include<stdio.h>

void merge(int a[100],int temp[100],int left ,int mid,int right){
	int i=left;
	int j=mid;
	int k=left;
	while(i<mid && j<=right){
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
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


void check(int arrl[100],int dep[100],int n){

	int i=1;//because we are considereing that guest currently is 1
	int j=0;
	int maxGuest=1;
	int guest=1;
	int time=arrl[0];
	while(i<n && j<n){
		if(arrl[i]<=dep[j]){
			guest++;
			if(guest>maxGuest){
				time=arrl[i];
				maxGuest=guest;
			}
			i++;
		}
		else{
			guest--;
			j++;
		}
	}

	printf("%d\n",time);

}

int main(){

	int n;
	scanf("%d",&n);
	int arrl[100];
	int dep[100];

	for(int i=0;i<n;i++)
		scanf("%d",&arrl[i]);

	for(int i=0;i<n;i++)
		scanf("%d",&dep[i]);

	int temp[100];
	mergeSort(arrl,temp,0,n-1);
	mergeSort(dep,temp,0,n-1);

	check(arrl,dep,n);


}