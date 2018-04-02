#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *ptr;
	 ptr=fopen("3.txt","r");

	 if(ptr==NULL){
	 	printf("Could not open file\n");
	 	return 0;
	 }

	 int s_com=0;
	 int m_com=0;

	 char ch,chNew;
	 ch=fgetc(ptr);
	 chNew=fgetc(ptr);
	 while(ch!=EOF){
	 	if(ch=='/' && chNew=='/'){
	 			while(chNew!='\n'){
	 				chNew=fgetc(ptr);
	 					
	 				}
	 		
	 				//at this point new is '\n';
	 			ch=chNew;
	 			chNew=fgetc(ptr);
	 		}
	 	else if(ch=='/' && chNew=='*') {
	 				while(ch!='*' || chNew!='/'){
	 						ch=chNew;
	 						chNew=fgetc(ptr);
	 				}
	 				//here you have ch=* and chNew=/
	 				ch=chNew;
	 				chNew=fgetc(ptr);
	 				ch=chNew;
	 				chNew=fgetc(ptr);
	 	}
	 		else{
	 			printf("%c",ch);
	 			ch=chNew;
	 			chNew=fgetc(ptr);
	 		}

	 


	 }

	
	 		

	  
	  fclose(ptr);
	 
	 
}