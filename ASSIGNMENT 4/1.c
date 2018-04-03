#include<stdio.h>
#include<malloc.h>
typedef struct type{
int num;
int count;

}type;

type* G[100];
int size=0;

void create(int num){
	type* new=(type*)malloc(sizeof(type));
	new->num=num;
	new->count=1;
	G[size]=new;
	size++;
}

int isPresent(int number){
	for(int i=0;i<size;i++){
		if(G[i]->num==number)
			return 1;
	}
	return 0;
}
void update(int number){
	for(int i=0;i<size;i++)
		if(G[i]->num==number)
			(G[i]->count)++;
}
void prin(){
	for(int i=0;i<size;i++)
		printf("%d %d\n",G[i]->num,G[i]->count);
}
int main(){
	int n;
	int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(int i=0;i<n;i++){
		if(isPresent(a[i])){
			update(a[i]);
		}
		else
			create(a[i]);
	}

	prin();//debugger


	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(G[j]->count>G[j+1]->count){
				type* temp=G[j];
				G[j]=G[j+1];
				G[j+1]=temp;
			}
		}
	}
	printf("After stable sortin")
	prin();

}
