#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int max(int x,int y){
return (x>y)?x:y;
}
int min(int x,int y){
	return (x>y)?y:x;
}

int costOfOp(int n,int h[100],int c[100],int res_h){//cost to get to this height
	int total=0;
	for(int i=0;i<n;i++){
		total+=abs(h[i]-res_h)*c[i];
	}
	return total;



}
	
int minimumCost(int n,int h[100],int c[100]){
		int max_h=INT_MIN;
	for(int i=0;i<n;i++)
		max_h=max(max_h,h[i]);

	int ans=INT_MAX;//will do binary search on the answer assume the answer is ans

	int high=1+max_h;
	int low=0;
	while(low<high){
		int mid=(high+low)>>1;
		int bm=(mid>0)?costOfOp(n,h,c,mid-1):INT_MAX;

		int m=costOfOp(n,h,c,mid);

		int am=costOfOp(n,h,c,mid+1);

		if(ans==m)		//that means we have found the answer
			break;

		ans=min(ans,m);

		if(bm<=m)
			high=mid;
		else if(am<=m)
			low=mid+1;


	}
	return ans;


}


int main(){

	int n;
	scanf("%d",&n);

	int height[100];
	int cost[100];
	for(int i=0;i<n;i++)
		scanf("%d",&height[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&cost[i]);

	printf("%d",minimumCost(n,height,cost));

		

}
