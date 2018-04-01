#include<stdio.h>
#include<string.h>
int main(){
	char key[200];
	char sent[200];

	scanf(" %s",key);
	scanf(" %[^\n]s",sent);

	char mat[200][200];

	int keylength=strlen(key);
	int sentlength=strlen(sent);

	printf("%d %d\n",keylength,sentlength);

		int r=0;int c=0;

		for(int i=0;sent[i]!='\0';i++){
			if(sent[i]==' '){
				mat[r][c]='\0';
				r++;
				c=0;

			}
			else{
				mat[r][c]=sent[i];
				c++;
			}


		}	
		mat[r][c]='\0';

		
		for(int i=0;i<=r;i++){
			printf("%s\n",mat[i]);
		}
			int wordcount=0;
		for(int i=0;i<=r;i++){
			if(strcmp(key,mat[i])==0){
				wordcount++;
			}
		}

	
		printf("%d\n",wordcount);
}

