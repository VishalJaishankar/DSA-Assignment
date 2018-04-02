#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void reverse(int a[200],int p){
	int temp[200];
	int len=p-1;
	int i=0;
	while(i<len){
		int temp=a[len];
		a[len]=a[i];
		a[i]=temp;
		i++;
		len--;
	}


}


int main(){
	int N;
	scanf("%d",&N);
	int card[200];

	for(int i=0;i<N;i++)
		scanf("%d",&card[i]);

	for(int i=0;i<N;i++){	//debugger
		printf("%d",card[i]);
	}
	printf("\n");

	int check_digit=card[N-1];	//this has the last digit


	reverse(card,N-1);	//to reverse first N-1 digits

	for(int i=0;i<N;i++){	//debugger
		printf("%d",card[i]);
	}//works till here

	printf("\n");

	for(int i=0;i<N-1;i++){

		if(i%2==0){	//the first digit will be odd

			int prod=card[i]*2;
			if(prod>9){		//if teh product is greater than 9 then
				card[i]=prod/10+prod%10;		//sum of digits

			}
			else{			//if prod is less then just copy
				card[i]=prod;
			}

		}

	}

	for(int i=0;i<N;i++){	//debugger
		printf("%d",card[i]);
	}//works

	printf("\n");

	int sum=0;

	for(int i=0;i<N;i++)
			sum+=card[i];

		printf("%d\n",sum );


	return 0;
}