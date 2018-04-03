#include<stdio.h>

int a[100];

int max(int i,int j){
	return (i>j)?j:i;
}

void reverse(int start,int end){
	int i=start;int j=end;

	while(i<j){
		int temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		i++;
		j--;
	}


}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int maxNum;
	int maxIndex;
	int len=n-1;
	while(len){
		maxNum=a[0];
		maxIndex=0;
		for(int i=0;i<=len;i++){
			if(a[i]>maxNum){
				maxNum=a[i];
				maxIndex=i;
			}

		}

		reverse(0,maxIndex);
		reverse(0,len);
		len--;




	}

	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");



}