#include<stdio.h>
int main(){
	int chess[20][20];
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			scanf("%d",chess[i][j]);
		}
	}

	int ver[20]={0};//calculate 1s in vertical direction
	int hori[20]={0};//calculate 1s in horixontal direction
	int rtd[20]={0};//calculate 1s in right diagonal
	int ltd[20]={0};//calculate 1s in  left diagonal

	int flag=0;
	for(int i=0;i<7;i++){
		if(flag==1)
			break;
		for(int j=0;j<7;j++){
			if(chess[i][j]==1)
				hori[i]++;

			if(hori[i]>1){
				printf("NO\n");
				flag=1;
				break;
		}
			}
	}

	int flag=0;

	for(int i=0;i<7;i++){
		if(flag==1)
			break;
		for(int j=0;j<7;j++){
			if(chess[j][i]==1)
				ver[i]++;

			if(ver[i]>1){
				printf("NO\n");
				flag=1;
				break;
		}
			}
	}

		//do for the diagonals too

	//for right diagonal

	int flag=0;
	int diag=0;//fill the rtd array
	for(int i=0;i<8;i++){
		if(flag==1)
			break;
			for(int j=0;j<=i;j++){
				int p=i;
				if(chess[p][j]==1)
					rtd[diag]++;
				if(rt[diag]>1){
					flag=1;
					break;
				}
				p--;

			}
			diag++;

	}

	int flag=0;


	for(int j=1;j<8;j++){
		if(flag==1)
		break;

		
			for(int i=7;i>=j;i--){
				if(chess[i][j]==1)
					rtd[diag]++;
				if(rt[diag]>1){
					flag=1;
					break;
				}

			}
			diag++;

	}


	//for left diagonal
	int iter=0;
	flag=0;
	for(int i=0;i<8;i++){
		int j=0;
		if(flag=1)
			break;
		while(j<8){
			if(chess[j][i]==1)
				ltd[iter]++;
			i++;
			j++;
			if(ltd[iter]>1){
				flag=1;
			break;
			}
		}	

	}





}









