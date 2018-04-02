#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){

	int NonZeroCount=0;
	int mat[20][20]={0};
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			scanf("%d",&mat[i][j]);
			if(mat[i][j]!=0)
				NonZeroCount++;

		}
	}

	if(NonZeroCount<10){
		printf("Parse\n");

		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(mat[i][j]!=0)
					printf("< %d %d %d >\n",i,j,mat[i][j] );
			}
		}

		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(i<j){		//do with upper triangle

						int temp=mat[i][j];
						mat[i][j]=mat[j][i];
						mat[j][i]=temp;
				}
			}
		}
		printf("Transpose\n");

		for(int i=0;i<6;i++){
			for(int j=0;j<6;j++){
				if(mat[i][j]!=0)
					printf("< %d %d %d >\n",i,j,mat[i][j] );
			}
		}



	}

	else
		printf("Not Parse\n");

	



}