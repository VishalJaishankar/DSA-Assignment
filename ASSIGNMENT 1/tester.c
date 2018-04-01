#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct id{
	char c;
	int count;
}id;

id* G[200]={'\0'};
int size=0;


int isPresent(char a){
	for(int i=0;i<size;i++){
		if(G[i]->c==a)
			return 1;
	}
	return 0;
}

void update(char a){
	for(int i=0;i<size;i++){
		if(G[i]->c==a){
			(G[i]->count)++;
		}
	}
}

void create(char a){
	id*new=(id*)malloc(sizeof(id));

	new->c=a;
	new->count=1;
	G[size]=new;
	size++;
}

void printContent(){
	for(int i=0;i<size;i++){
		printf("%c %d \n",G[i]->c,G[i]->count);
	}
}




int multiply(int x,int res[200],int size){
	int prod;
	int carry=0;
	for(int i=0;i<size;i++){
		prod=x*res[i]+carry;
		res[i]=prod%10;
		carry=prod/10;
	}

	while(carry){
		res[size]=carry%10;
		carry=carry/10;
		size++;
	}

return size;

}



void cal(int n){
	int temp=1;
	int res[200];
	int size=1;
	res[0]=1;
	for(int i=2;i<=n;i++){
		size=multiply(i,res,size);
	}

	for(int i=size-1;i>=0;i--){
		printf("%d",res[i]);
	}

}











int main(){
	int N;
	scanf("%d",&N);
	cal(N);
}