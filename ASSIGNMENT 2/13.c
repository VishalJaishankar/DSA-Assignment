#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int max(int x,int y){
	return (x>y)?x:y;
}
int min(int x,int y){
	return (x>y)?y:x;
}
void minDist(int f[20],int s[20],int t[20],int a,int b,int c){
	int i=0,j=0,k=0;
	int res_i=0;
	int res_j=0;
	int res_k=0;
	int min_dist=100000;
	while(i<a && j<b && k<c){
		int maxNum=max(f[i],max(s[j],t[k]));
		int minNum=min(f[i],min(s[j],t[k]));

		int diff=maxNum-minNum;
		if(diff==0){
			printf("%d %d %d\n",f[i],s[j],t[k]);
			return;
		}
		if(diff<min_dist){
			res_i=i;
			res_j=j;
			res_k=k;
			min_dist=diff;
		}

		if(f[i]==minNum)
			i++;
		else if(s[j]==minNum)
			j++;
		else
			k++;
	}

	printf("%d %d %d\n",f[res_i],s[res_j],t[res_k]);
}


int main(){
	
	int a,b,c;
	int f[20],s[20],t[20];
	scanf("%d %d %d ",&a,&b,&c);
	printf("Enter the first array:");
	for(int i=0;i<a;i++ )
		scanf("%d",&f[i]);
	for(int i=0;i<b;i++)
		scanf("%d",&s[i]);
	for(int i=0;i<c;i++)
		scanf("%d",&t[i]);
	minDist(f,s,t,a,b,c);

}