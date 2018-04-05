#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long long int weight(char temp[100]){
	long long int sum=0;
	int i=0;
	while(temp[i]!='\0'){
		sum+=temp[i];
		i++;
	}

	return sum;
}


void convert(char str[100][100],int n){
	int num[100];//num holds the number of ones
	for(int i=0;i<n;i++)
		num[i]=0;
	for(int i=0;i<n;i++)
		num[i]=__builtin_popcountll(weight(str[i]));

	for(int i=0;i<n;i++)
		printf("%d\n",num[i]);


	for(int i=1;i<=64;i++){	//will be stabel and sorted
		for(int j=0;j<n;j++){
			if(num[j]==i){
				printf("%s\n",str[j]);
			}
		}
	}
	

	
}


int main(){
	int n;
	scanf("%d",&n);
	char str[100][100];

	for(int i=0;i<n;i++){
		scanf("%s",str[i]);

	}

	convert(str,n);

}