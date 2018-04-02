#include<stdio.h>
int a[100];
int n,m;
void sort(){
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

int nonZero(){

	for(int i=0;i<m;i++){
		if(a[i]==0)
			return 0;
	}

	return 1;


}

int count=0;


int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);


	while(1){
		sort();
		if(nonZero()){
			for(int i=0;i<m;i++)
				a[i]--;
					count++;
		}
		else 
			break;
	}

	printf("%d\n",count);
}