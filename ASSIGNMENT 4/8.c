#include<stdio.h>

void sortup(int a[100],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i] );
}

void sortdown(int a[100],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i] );
}


int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int e=0;
	int o=0;
	int even[100];
	int odd[100];
	int ele;
	for(int i=0;i<n;i++){
//		scanf("%d",&n);
		scanf("%d",&ele);
		if(i%2==0)
			even[e++]=ele;
		else
			odd[o++]=ele;

	}

	for(int i=0;i<e;i++)
		printf("%d ",even[i] );
	printf("\n");
	for(int i=0;i<o;i++)
		printf("%d ",odd[i] );
	printf("\n");

	sortup(even,e);
	sortdown(odd,o);
	//sort(even,e);
	//sort(odd,o);


}