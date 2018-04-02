#include<stdio.h>

void check(int a[100],int m,int start,int end){
	int mid=(start+end)/2;
	if(m%2==0){
		if(a[end+1]>3*(a[mid]+a[mid+1])/2)
			printf("1 ");
		else
			printf("0 ");
	}

	else
	{
		if(a[end+1]>3*a[mid])
			printf("1 ");
		else
			printf("0 ");
	}
}


void shift(int a[100],int n,int m,int start,int end){
	//put the end index at the correct position
	if(end==n-1)
		return;
	int j;
	int key=a[end];
	for( j=end-1;j>=start;j--){
		if(a[j]>key){
			a[j+1]=a[j];
		}
		else{
			a[j+1]=key;
			break;
		}
	}
	if(j<start)
		a[start]=key;

	//for(int i=0;i<n;i++)
	//	printf("%d ",a[i] );

	//printf("\n");

	check(a,m,start,end);

	shift(a,n,m,start+1,end+1);
}

int main(){
	int n,m;
scanf("%d %d",&n,&m);

		int a[100];

	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<m-1;i++){
		for(int j=0;j<m-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

//	for(int i=0;i<n;i++)
//		printf("%d ",a[i]);

//	printf("\n");
	check(a,m,0,m-1);

	shift(a,n,m,1,m);

}