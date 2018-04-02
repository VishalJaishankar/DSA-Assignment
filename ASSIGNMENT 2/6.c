#include<stdio.h>
#include<malloc.h>

typedef struct item{
	char itemName[20];
	int itemCode;
	float price;
	int QtyInStock;
	int IsHighDemand;
	int SoldToday;



}item;

item* G[200];
int size=0;
void addItem(char name[20]){
	item* new=(item*)malloc(sizeof(item));
	new->
}

int main(){
	printf("press 1 to additem\n 2 to update the price on item\n
			3 to update stock of an item\n
			4 to show the price list\n
			5 to seel an item\n
			6 to exit\n ");
	int option;
	while(1){
		scanf("%d",&option);
		if(option==1){
			addItem(char name[20],int itemCode,float price,int QtyInStock,int IsHighDemand,int SoldToday);
		}
	}
}