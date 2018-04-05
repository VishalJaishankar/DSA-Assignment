#include<stdio.h>
#include<limits.h>
int n[100][100];
int r,c;


int findmax(int col){
	int max=INT_MIN;
	int index=0;
	for(int i=0;i<r;i++){
		if(n[i][col]>max){
			max=n[i][col];
			index=i;
		}
	}

	return index;
}

int peak(int start,int end){
		int mid=(start+end)/2;
		int colmax=findmax((start+end)/2);//send in the column number
		
		if(mid==0 || mid ==c-1)
			return n[colmax][mid];
		if(n[colmax][mid]>=n[colmax][mid-1] && n[colmax][mid]>=n[colmax][mid+1])
			return n[colmax][mid];
		if(n[colmax][mid]<n[colmax][mid-1])
			return peak(start,mid-1);

		else
		return peak(mid+1,end);


}


int main(){

	scanf("%d %d",&r,&c);

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",&n[i][j]);
	printf("%d\n",	peak(0,c-1));



}