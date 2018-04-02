#include<stdio.h>
#include<limits.h>
int min(int x,int y){
	return (x>y)?y:x;
}
int inCnt(int a[100],int n){
	int count=0;

	for(int i=0;i<n;i++){
		int m=a[i];

		for(int j=i-1;j>=0;j--){
			if(a[j]>m)
				count++;
		}
	}

	return count;

}


int selCnt(int a[100],int n){

	int count=0;

	for(int i=0;i<n;i++){
		int minimum=a[i];
		int index=i;
		for(int j=i;j<n;j++){//this gives the minimum element
				if(a[j]<minimum){
					index=j;
				minimum=a[j];
			}
	
	 	}
	 	if(i!=index){
				count++;
				int temp=a[index];
				a[index]=a[i];
				a[i]=temp;
			}

	}

	for(int i=0;i<n;i++)
		printf("%d ",a[i]);

	return count;

}

int bub(int b[100],int n){
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(b[j]>b[j+1]){
				int temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
				count++;
			}
		}
	}

	for(int i=0;i<n;i++)
		printf("%d ",b[i]);
	return count;
}

int main(){

	int n;
	scanf("%d",&n);
	int a[100];
	int b[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}

	int insert_cnt=inCnt(a,n);

	printf("For insertion sort:%d\n",insert_cnt );


	int sel_cnt=selCnt(a,n);
	printf("For selection:%d\n",sel_cnt );

	int bub_cnt=bub(b,n);
	printf("For bubblesort:%d\n",bub_cnt );


}