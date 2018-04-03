#include<stdio.h>

int check(int a[200],int n){
		int count=0;

	for(int i=0;i<n;i++){
		int minimum=a[i];
		int index=i;
		for(int j=i;j<n;j++){//this gives the minimum element
				if(a[j]<minimum){
					index=j;
				minimum=a[j];
			}
	
	 	}
	 	if(i!=index){
				count++;
				int temp=a[index];
				a[index]=a[i];
				a[i]=temp;
			}

	}

	
		return count;	
}



int main(){
	int t;
	scanf("%d",&t);


	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a[200];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);

		printf("case %d:%d\n",i+1,check(a,n));
	}
}