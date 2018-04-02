#include<stdio.h>
int seq[20];//will hold the numbes 1 to  9

int check(char c[20]){//check the numbrs with this combination and prints if the sum is 100
	int concat;//will store teh interger to be concatinated
	int i=0;//will traverse char
	int j=0;//will traverse seq
	int sum=0;
	while(i<8 && j<9){


		if(i==0 && c[i]==' '){//check for the first character if it is space
		i++;
		int concat=seq[j++]*10+seq[j++];//j is on numbe 2
		while(c[i]==' '){
			concat=concat*10+seq[j++];
			i++;
		}
		sum=concat;

		//till the next non space character it will traverse
		//at then end of this i will point to next non space character
		//j will point to the next number to be added or subtracted
		//sum will hold the concatinated part if the first  char is space

		}

	 if(i==0 && c[i]!=' '){		//if not space then it will be the first number
		sum=1;
		j++;
	}



	int p=i+1;

	if(c[p]==' '){
		int concat=seq[j++]*10+seq[j++];
		p++;
		while(c[p]==' '){
			concat=concat*10+seq[j++];
			p++;
		}
		if(c[i]=='+')
			sum=sum+concat;
		if(c[i]=='-')
			sum=sum-concat;
	
			i=p;
			p=i+1;
		}



	if(c[p]!=' '){//i is pointing to the non space character and p is pointing to the next character 
		if(c[i]=='+'){
			sum+=seq[j++];
			i++;
			p++;

		}
		else if(c[i]=='-'){
			sum=sum-seq[j++];
			i++;
			p++;
		}
	}

	//printf("%d\n",sum);

	//i=3;
	//the first number is identified and stored
	//if spaces come in between write a function
	//increment it to see
}

		if(sum==100)
			return 1;

		return 0;
//	printf("=%d\n",sum);
	
}


void printCombo(char c[20],int count){		//creates the combination of 

	if(count==8){		//at this point we have a aarray with a possible combination
		for(int i=0;i<8;i++)
		printf("%c",c[i]);
		printf("\n");
		return ;	
	}
		/*
		if(check(c)==1){

		
	for(int i=0,j=0;i<8,j<8;i++,j++){
		if(c[i]==' ')
			c[i]='\0';		
		printf("%d%c",seq[j],c[i] );
		if(c[i]=='\0')
			c[i]=' ';
	}
		printf("9=100\n");

		}
		
					return ;
		
	}
	*/

	c[count]='+';
	printCombo(c,count+1);
	c[count]='-';
	printCombo(c,count+1);
	c[count]=' ';
	printCombo(c,count+1);



}
int main(){
	char c[20];
	
	for(int i=0;i<10;i++)
		seq[i]=i+1;
	for(int i=0;i<10;i++)
		printf("%d",seq[i]);
	printf("\n");
	printCombo(c,0);


}