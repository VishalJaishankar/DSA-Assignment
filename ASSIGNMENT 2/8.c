#include<stdio.h>
#include<malloc.h>
//floating point exception
void seive(int*s,int n){

	int *prime=(int*)malloc((n+1)*sizeof(int));

  for(int i=2;i<=n;i++)
	prime[i]=0;
	//for even numbers the smallest factor is 2

	for(int i=2;i<=n;i+=2)//for even numbers
		s[i]=2;

	for(int i=3;i<n;i+=2){
		if(prime[i]==0){
			s[i]=i;	//dont forget this
			for(int j=i;j*i<=n;j+=2){
				if(prime[i*j]==0){
					prime[i*j]=1;
					s[i*j]=i;
				}
			}
		}
	}





	free(prime);

}

int main(){

	int N;
	scanf("%d",&N);
	int *s;
	s=(int *)malloc((N+1)*sizeof(int));

	seive(s,N);
	int sum=0;
	int curr=s[N];	//has the  smallest factor
	int cnt=1;	//power
	while(N>1){
		N=N/s[N];
		if(curr==s[N]){
			cnt++;
			continue;
		}

		printf("%d %d\n",curr,cnt);
//		printf("%d\n",N);
		
		sum+=cnt;
		curr=s[N];
		cnt=1;

	}



	printf("%d\n",sum);


	free(s);


}