#include<stdio.h>

void join(int a[100],int left[100],int right[100],int l,int m,int r ){
	int i;

	for(i=0;i<=m-l;i++)
		a[i]=left[i];
	for(int j=0;j<r-m;j++)
		a[i+j]=right[j];
}


void split(int a[100],int left[100],int right[100],int l,int m,int r){

	for(int i=0;i<=m-l;i++)
		left[i]=a[i*2];

	for(int i=0;i<r-m;i++)
		right[i]=a[i*2+1];

}

void generateWorstCase(int a[100],int start,int end){
	//printf("he");
	if(start<end){
		int mid=(start+end)/2;

		int left[100];
		int right[100];
		split(a,left,right,start,mid,end);

		generateWorstCase(left,start,mid);
		generateWorstCase(right,mid+1,end);

		join(a,left,right,start,mid,end);


	}
}

int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int  i=0;i<n;i++)
		scanf("%d",&a[i]);

	generateWorstCase(a,0,n-1);//array ,starting index ,ending index
	printf("After separating\n");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);


}