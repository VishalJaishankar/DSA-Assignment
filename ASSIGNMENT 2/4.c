//have to do it brute

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getDigits(int n){
	int d=1;
	int i=1;
	while(d<n){
		d*=10;
		i++;
	}
	if(n/10==0)
		return 1;
	//printf("%d\n",i-1 );
	return i-1;
}

void printNum(int i){
	if(i==1)
		printf("one ");
	if(i==2)
		printf("two ");
	if(i==3)
		printf("three ");
	if(i==4)
		printf("four ");
	if(i==5)
		printf("five ");
	if(i==6)
		printf("six ");
	if(i==7)
		printf("seven ");
	if(i==8)
		printf("eight ");
	if(i==9)
		printf("nine ");

}

void printTens(int n){		//n is a two digit number
	//printf("%d\n",n);
	int second=n/10;			//n has the second digit
	//printf("%d",second);
	if(second==2)
		printf("twenty ");
	if(second==3)
		printf("thirty ");
	if(second==4)
		printf("fourty ");
	if(second==5)
		printf("fifty ");
	if(second==6)
		printf("sixty ");
	if(second==7)
		printf("seventy ");
	if(second==8)
		printf("eighty ");
	if(second==9)
		printf("ninty ");	

}

void special(int n){
	if(n==10)
		printf("ten ");
	if(n==11)
		printf("eleven ");
	if(n==12)
		printf("twelve ");
	if(n==13)
		printf("thirteen ");
	if(n==14)
		printf("fourteen ");
	if(n==15)
		printf("fifteen ");
	if(n==16)
		printf("sixteen ");
	if(n==17)
		printf("seventeen ");
	if(n==18)
		printf("eighteen ");
	if(n==19)
		printf("nineteen ");
	if(n==20)
		printf("twenty ");

}

int main()
{
		int N;
		scanf("%d",&N);
		
		int num=getDigits(N);//num contains 
		printf("%d\n",num);
		int i=num;//copy into i


		
			if(i==4){
				printNum(N/1000);
				printf("thousand ");
				i--;
			}
			if(i==3){
				printNum((N/100)%10);
				printf("hundered and ");
				
				i--;
			}

			if(i==2){

				int tens=N%100;//has the last two digits
				if(tens>=10 && tens<=20){
					special(tens);
					////break;		//since the last digit is also printed
				}

				else if(tens<10)
					i--;

				else if(tens>20){
					printTens(tens);
					i--;
				}
		}
		
			if(i==1){
				printNum(N%10);
				i--;
			}



			
		
		printf("\n");


	return 0;
}