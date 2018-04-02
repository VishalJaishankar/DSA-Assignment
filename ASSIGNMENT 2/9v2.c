#include<stdio.h>
#include<time.h>
static int count;
void check(unsigned long long int n,unsigned long long int currNum){
	if(currNum<=n){
		count++;
		printf("current num:%lld\n",currNum);
		printf("count: %d\n",count);

	}
	else
		return ;

	check(n,10*currNum+1);
	check(n,10*currNum+7);
	check(n,10*currNum+9);


	
}

int main(){

	long long unsigned int N;
	scanf("%lld",&N);
		clock_t begin = clock();	//measures the begin time

	 check(N,0);		//start with 0 and build the answer with count=0;


	 	clock_t end = clock();		//measures the end time

		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		printf("%lf\n",time_spent);

//	printf("%d",count);
}