#include<stdio.h>
#include<limits.h>
	int n,m;

		int a[100];

int check(int mid){
	int gr=1;
	int sum=0;
	for(int i=0;i<n;i++){
		if(sum>mid)
			return 0;
		else if(sum+a[i]>mid){
			gr++;
			sum=a[i];
		}
		else
			sum+=a[i];
	}
	return (gr<=m);
}



int binsearch(int lo,int hi){
	while(lo<hi){
		int mid=(lo+hi)/2;

		if(check(mid))
			hi=mid;
		else
			lo=mid+1;
	}
	return lo;
}



int main(){

	scanf("%d %d",&n,&m);

	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//sort it here

	int ans=binsearch(0,INT_MAX);
	printf("%d\n",ans);
}