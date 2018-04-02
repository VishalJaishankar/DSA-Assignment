#include<stdio.h>
#include<string.h>
int removeSpace(char str[200]){
	int i=0;
	int len=strlen(str);
	while(str[i]!='\0'){
		if(str[i]==' '){
			for(int j=i;j<len;j++)
				str[j]=str[j+1];
			len--;
		}
		else i++;
	}
	return len;

}


int main(){
	int N;//number of rows
	scanf("%d",&N); //number of rows

	char str[200];
	scanf(" %[^\n]s",str);
	int len=removeSpace(str);		//len has the length without spaces

	for(int i=0;i<len;i++)//debugger
		printf("%c",str[i]);

	printf("\n");

	int col=len/N;

		int i=0;		//will iterate through the str

		for(int i=0;i<N;i++){
			for(int j=i;j<len;j+=N)
				printf("%c",str[j]);
		}


}