#include<stdio.h>
int main(){
	int mat1[100][100];
	int mat2[100][100];

	int row1,row2,col1,col2;
	scanf("%d %d",&row1,&col1);
	for(int i=0;i<row1;i++){		//inputs for matrix one
		for(int j=0;j<col1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}

	scanf("%d %d",&row2,&col2);

	for(int i=0;i<row2;i++){		//inputs for matrix two
		for(int j=0;j<col2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}


	int colsum[100]={0};
	int rowsum[100]={0};


	for(int i=0;i<col1;i++){			//store teh column sums int the array colsum
		for(int j=0;j<row1;j++){
			colsum[i]+=mat1[j][i];
		}
	}

	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			rowsum[i]+=mat2[i][j];
		}
	}

	int final=0;

		for(int i=0;i<col1;i++){
			final+=rowsum[i]*colsum[i];
		}

		printf("%d\n",final );
return 0;
}