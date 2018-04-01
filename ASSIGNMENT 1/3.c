#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct id{
 
	char c;		//char it holdes
	int count ;		//frequency

}id;
id* G[200]={'\0'};		//globally declares and initialized		//remembe it is a array of pointer
int size=0;				//size gives th enumber of elements in the array
void create(char c){			//method to create a new structure
	id* new=(id*)malloc(sizeof(id));	//malloc returns a null pointer so you have to typecast it 
	new->c=c;				//provide the id for it
	new->count=1;			//since newly creaetd count=1
	G[size]=new;
	size++;					//increase the size variable to make space for the next
	 

}
 
void update(char c){
	for(int i=0;i<size;i++){
		if(G[i]->c==c){
			(G[i]->count)++;
		}
	}
}

int isPresent(char c){
	for(int i=0;i<size;i++){
		if(G[i]->c==c){
			return 1;	// if the cahr is already present in the array then retrun true
		}
	}
	return 0;	//if not present then retrun 0
}

void printContent(){
	for(int i=0;i<size;i++){
		printf("%c %d\n",G[i]->c,G[i]->count);
	}

}






int main(){
	//take input by a do while loop
		char temp;
	do{
		scanf("%c",&temp);		//after taking the input 
		if(temp!='\n'){
		if(isPresent(temp)){		//check if that is available in the array
				update(temp);
		}							
		else 		//if not present then add a new node to the array
			create(temp);}	//create will take care of the size attribute		
	}while(temp!='\n');

	printf("%d\n",size);		//debugger



				

			printContent();


	return 0;

}