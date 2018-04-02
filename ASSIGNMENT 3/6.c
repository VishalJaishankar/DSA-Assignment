#include<stdio.h>


void sort(int x[20],int X){
	int temp;
	for(int i=0;i<X-1;i++){
		for(int j=0;j<X-i-1;j++){
			if(x[j]>x[j+1]){
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
}
int removeKey(int x[20],int key,int j,int X){//x has the key from index j
	while(x[j]==key){
		printf("%d ",key);
	for(int i=j;i<X;i++)
			x[i]=x[i+1];
			
		X--;
	}
	return X;
		
	
}

int main(){
	int x[20];
	int X;
	int y[20];
	int Y;
	scanf("%d %d",&X,&Y);
	for(int i=0;i<X;i++)
		scanf("%d",&x[i]);

	
//	scanf("%d",&Y);
	for(int i=0;i<Y;i++)
		scanf("%d",&y[i]);


	sort (x,X);//sort the  first array

	for(int i=0;i<X;i++)//debugger
		printf("%d " ,x[i]);
	printf("\n");


	for(int i=0;i<Y;i++){//traverse the y array and find the element in yin x 
		int key=y[i];
		for(int j=0;j<X;j++){
			if(x[j]==key){
				X=removeKey(x,key,j,X);//this function removes the key from X and prints it returs the length of shorted array
			}
		}

	}

	for(int i=0;i<X;i++)	//print the rest of the sorted array
		printf("%d ",x[i]);

}