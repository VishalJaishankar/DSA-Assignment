#include<stdio.h>
#include<limits.h>
	int n,m;
	int a[100];
int check(int curr){
	int ct=1;//holds the initial number of groups

	int sum=0;

	for(int i=1;i<=m;i++){
		if(a[i]>curr)
			return 0;

		if(sum+a[i]>curr){
			ct++;
			sum=a[i];
		}
		else
			sum+=a[i];
	}

	return (ct<=n);

}


int binserch(int lo,int high){
	while(lo<high){
		int mid=(lo+high)>>1;

		if(check(mid))
			high=mid;
		else
			lo=mid+1;
	}
	return lo;
}

int main(){

	scanf("%d %d",&m,&n);
	for(int i=1;i<=m;i++)
		scanf("%d",&a[i]);

	int ans=binserch(1,INT_MAX);

	printf("%d\n",ans);
}