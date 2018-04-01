//try tokenizing and compare all the tokens with key

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
		char key[100];
		char sent[100];
		scanf(" %s",key);
		//printf("Enter the sentense");
		scanf(" %[^\n]s",sent);

		int sentlength=strlen(sent);
		int keylength=strlen(key);
		printf("%d %d\n",sentlength,keylength);
			int wordcount=0;
		for(int i=0;i<sentlength-keylength;i++){//traverse throught the whole sentence
			if((sent[i]==key[0] && i==0) || (sent[i]==key[0] && sent[i-1]==' ') ){	
				//for the first character and the for case it is in the middle
							int flag=0;			//flag stores number of common letters
						for(int j=0;j<keylength;j++){
								if(sent[i++]=key[j]){
									flag++;		
								}
								//	printf("%d\n",flag);

								
							}//if the word is in the m,iddle then the next char is ' ' else it might be the end
							if(flag==keylength && sent[i]==' ' || flag==keylength && sent[i]=='\0'){		
								wordcount++;
							}
							
			}


	}
			//try some more testcases
	printf("%d",wordcount);

}

