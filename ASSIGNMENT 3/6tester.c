#include<stdio.h>
int X[100000];
int Y[100000];
int x,y;

void removeINT(int key,int index){//remove key from X array

	while(X[index]==key){
		printf("%d ",key);
		for(int i=index;i<x;i++){
			X[i]=X[i+1];
		}
		x--;	
	}



}

void sort(){
	for(int i=0;i<x-1;i++){
		for(int j=0;j<x-i-1;j++){
			if(X[j]>X[j+1]){
				int temp=X[j];
				X[j]=X[j+1];
				X[j+1]=temp;
			}
		}
	}
}

int main(){
	
	scanf("%d %d",&x,&y);
	

	for(int i=0;i<x;i++)
		scanf("%d",&X[i]);
	for(int j=0;j<y;j++)
		scanf("%d",&Y[j]);

	sort();

	for(int i=0;i<y;i++){
		int key=Y[i];
		for(int j=0;j<x;j++){
			if(X[j]==key){
				removeINT(key,j);
			}

		
		}
	}

	for(int i=0;i<x;i++)
		printf("%d ",X[i]);


}