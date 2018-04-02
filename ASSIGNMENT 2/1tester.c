#include<stdio.h>
int main(){
	char c[20]={'+','+','-','+','+','+',' ','+'};
	int seq[20]={1,2,3,4,5,6,7,8,9};


	for(int i=0,j=0;i<8,j<9;i++,j++){
		if(c[i]==' ')
			c[i]='\0';		
		printf("%d%c",seq[j],c[i] );
		if(c[i]=='\0')
			c[i]=' ';
	}
	printf("\n");
	for(int i=0;i<8;i++)
		printf("%c",c[i]);
	

}