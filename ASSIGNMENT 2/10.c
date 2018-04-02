#include<stdio.h>
#include<time.h>
void small(int digits,int distinct){

	printf("1");
	digits--;
	distinct--;

	if(distinct==0){
		while(digits){
			printf("1");
			digits--;
		}
	return ;
	}

	while(digits>=distinct)
	{
		printf("0");
		digits--;
	}
	int p=2;
	while(digits){
		printf("%d",p++);
		digits--;
	}

}

void big(int digits,int distinct){

if(distinct==1){
		while(digits){
			printf("9");
			digits--;
		}
	return ;
	}

	while(digits>=distinct)
	{
		printf("9");
		digits--;
	}
	int p=8;
	while(digits){
		printf("%d",p--);
		digits--;
	}



}


int main(){

	int digits;
	int distinct;

	scanf("%d %d",&digits,&distinct);

	clock_t begin = clock();

	small(digits,distinct);
	printf("\n");
	big(digits,distinct);
	printf("\n");

	clock_t end = clock();

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("%lf",time_spent);

}