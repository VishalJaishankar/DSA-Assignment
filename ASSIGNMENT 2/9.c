 #include<stdio.h>
#include<time.h>
//brute the shit out of it

int check(int N){
	int aux[5]={0};		//aux holds the occurancs of 1,7,9
	//aux[0] holds count of 1
	//aux[1] holds count of 7
	//aux[2] holds count of 9
	int n=N;
	while(n){
		if(n%10==1 || n%10==7 || n%10==9)

		n=n/10;
	else
		return 0;
	}
	//printf("%d:\n",N);//debugger
	//printf("sum =%d\n",aux[0]+aux[1]+aux[2]);	//debugger
	//printf("digits=%d\n",getDigits(N));//debugger
	

	return 1;
	

}



int main(){

	unsigned int N;
	printf("%ld\n",sizeof(N));

	int count=0;
	scanf("%d",&N);
	clock_t begin = clock();	//measures the begin time
	for(int i=1;i<=N;i++)
		count+=check(i);
	clock_t end = clock();		//measures the end time


		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		printf("%lf\n",time_spent);

		printf("%d\n",count);
}