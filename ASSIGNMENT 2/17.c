#include<stdio.h>
#include<limits.h>
static int count;
int rowComb[20];
int colComb[20];
int mat[20][20];
int maxSum=0;//this is possible when all rows and columns have -ve elements
int N;
int sum=0;
int original;
void calculate(int k){
	int rowSum[20]={0};
	int colSum[20]={0};
	sum=original;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			rowSum[i]+=mat[i][j];

	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			colSum[j]+=mat[i][j];

	for(int i=0;i<k;i++)
		sum=sum-colSum[colComb[i]];
	for(int i=0;i<k;i++)
		sum=sum-rowSum[rowComb[i]];

	for(int i=0;i<k;i++)
		for(int j=0;j<k;j++)
			sum+=mat[rowComb[i]][colComb[j]];

		if(sum>maxSum)
			maxSum=sum;
		printf(" %d\n",sum);

}

void genCol(int num[20],int k,int index,int start,int end,int rowComb[20]){

	if(index==k){
		//at this point rowComb contains all k combinations of num
		//col comb contains all column combinations
		printf("rowCombination:");
		for(int i=0;i<k;i++)
			printf("%d",rowComb[i]);
		printf("\t");
		printf("colcombination:");
		for(int i=0;i<k;i++)
			printf("%d",colComb[i]);
		
		//the below function takes in the arrays and calculates sum after removing all rows and cols in the arrrays
		calculate(k);
		return;
	}

	for(int i=start;i<=end;i++){
		colComb[index]=num[i];
		genCol(num,k,index+1,i+1,end,rowComb);
	}

}

void genRow(int num[20],int k,int index,int start,int end){	//count keeps track of k number of numbers in current array
	//comb will keep curretn array 
	//k is number required 
	//count will place it in reequired position
	if(index==k){
		//for(int i=0;i<k;i++)
		//	printf("%d",rowComb[i]);//
		//printf("\n");
		//count++;

		genCol(num,k,0,0,end,rowComb);//after one combination of row gets selected generate colums

		return;
	}

	for(int i=start;i<=end;i++){
		rowComb[index]=num[i];
		genRow(num,k,index+1,i+1,end);
	}

}

int main(){
	scanf("%d",&N);
	
	//scan the matrix
	printf("Enter elemets of %d*%d matrix:",N,N);
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&mat[i][j]);
				sum+=mat[i][j];
		}
	}
	original=sum;//copy the original sum

	int num[20];//will hold the row indices
	for(int i=0;i<N;i++)
		num[i]=i;
	printf("Number of numbers to choose:");
	int k;
	for(k=0;k<N;k++)
		genRow(num,k,0,0,N-1);

	printf("max sum:%d\n",maxSum);

}