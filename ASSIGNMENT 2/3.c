#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void removeComments(char str[200]){
	int len=strlen(str);

	int s_com=0;
	int m_com=0;

	for(int i=0;i<len;i++){
		if(s_com==1 && str[i]=='\n')
			s_com=0;

		else if(m_com==1 && str[i]=='*' && str[i+1]=='/'){
			m_com=0;i++;
		}

		else if(s_com || m_com)
			continue;
		else if(str[i]=='/' && str[i+1]=='/'){
				s_com=1;i++;
				
		}
		else if(str[i]=='/' && str[i+1]=='*'){
			m_com=1;i++;
			
		}

		else
			printf("%c",str[i]);

	}
	//printf("%s\n",rem);
}

int main(){
char str[200]="int main()\n"
			"{			\n"
	"//variable declaration\n"
	"/*\n"
	"this is a multiple line comment\n"
	"that ends in the next line\n"
	"*/\n"
	"int a,b,c;	\n"
		"}		";

		printf("%s\n",str);
		printf("after removing comments:\n");
		//char rem[200]={'\0'};
		removeComments(str);
	//	printf("%s\n",rem);


}