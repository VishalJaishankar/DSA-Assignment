#include<stdio.h>
#include<string.h>
int getKey(char c){
	int alpha[100]={2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,99,9999};
	int num[20]={0,11,2222,3333,4444,5555,6666,77777,8888,99999};
	int space=0;

	if(c>=97 && c<=122){		//if it is a alphabet
			return alpha[c-97];
	}
	else if(c>=48 && c<=57){	//if it is a number then
		return num[c-48];
	}
	else if(c==' ')		//if it is a space then 
		return 0;

}

void printNum(char str[200]){
	int i=0;
	int len=strlen(str);
	//print the first character and then start a loop form second
	//[ut if else for '0' character
	printf("%d",getKey(str[i]));//printig th efirst character
	for(int j=1;j<len;j++){
			if(getKey(str[j-1])%10==getKey(str[j])%10){
				if(str[j]=='0')
					printf(" 00" );				
				
				else printf(" %d",getKey(str[j]));	//put a space and print it
			}		
			else{
				if(str[j]=='0')
					printf("00");
				else
					printf("%d",getKey(str[j]) );
			}
	}
}

int main(){
	
	//for zero put a special print of 00//



	//printf("%d",'a');

	//the alpha index have offfset of 97
	//'a' is storesin 0 i.e 97-97
	//'b' is stored in 98-97=1 and so on
	//num has the key for numbers in their proper index

	char str[200];
	scanf(" %[^\n]s",str);//input of the string
	printNum(str);

}