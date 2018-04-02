#include<stdio.h>

int n,m;
int data[200];
void sort(int a[100]){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}


}
static int count=0;
void combinationUtil(int arr[], int data[], int start, int end,int index, int r,int base)
{		if(arr[base]==0)
			return ;

		if(index==r){
			for(int i=0;i<r;i++)
				arr[data[i]]--;

			printf("contents of array:\n");

			for(int i=0;i<n;i++)
				printf("%d ",arr[i]);
			printf("\n");

			printf("index choosen\n");
			for(int i=0;i<m;i++)
				printf("%d ",data[i]);
			printf("\n");
			return;
		}

		for(int i=start;i<=end;i++){
			data[index]=i;
			combinationUtil(arr,data,start+1,end,index+1,r,base);
		}
	

}

void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
 
    // Print all combination using temprary array 'data[]'
    for(int i=0;i<=n-m;i++){
    if(arr[i]!=0)
    combinationUtil(arr, data, i, n-1, 0, r,i);
	}
}

int main(){
	scanf("%d %d",&n,&m);
	int play[100];
	for(int i=0;i<n;i++)
		scanf("%d",&play[i]);

	//sort(play);

	printCombination(play,n,m);


}