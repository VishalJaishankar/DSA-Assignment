#include<stdio.h>
static int count=0;

void sort(int a[100],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int nonZero(int a[100],int m){
	for(int i=0;i<m;i++){
		if(a[i]==0)
			return 0;
	}

	return 1;
}
void reduce(int a[100],int n,int m){
	while(1){
		sort(a,n);

		if(nonZero(a,m)){
				for(int i=0;i<m;i++)
					a[i]--;

				count++;
		}
		else return;
	}
}


int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[100];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	reduce(a,n,m);
	printf("%d\n",count);
}