//write code to encode and decode

#include<stdio.h>
#include<string.h>

void increase(char temp[200]){
	for(int i=0;i<strlen(temp);i++){
		if(temp[i]=='x')
			printf("a");
		else if(temp[i]=='y')
			printf("b");
		 else if(temp[i]=='z')
			printf("c");
		else if(temp[i]=='X')
			printf("A");
		 else if(temp[i]=='Y')
			printf("B");
		else if(temp[i]=='Z')
			printf("C");
		else
			printf("%c",temp[i]+3);


	
	}
	printf(" ");		//to space the next 
}

void decrease(char temp[200]){
	for(int i=0;i<strlen(temp);i++){
		if(temp[i]=='a')
			printf("x");
		else if(temp[i]=='b')
			printf("y");
		else if(temp[i]=='c')
			printf("z");
		else if(temp[i]=='A')
			printf("X");
		else if(temp[i]=='B')
			printf("Y");
		else if(temp[i]=='C')
			printf("Z");

		else printf("%c",temp[i]-3);


	}
	printf(" ");
}


void reverse(char c[200],int opt){		//reverses the input string
	int i=0;
	int l=strlen(c)-1;
	char temp[200];		//to store the reversed string 
		while(l!=-1){
			temp[i]=c[l];
			l--;i++;
		}
		temp[i]='\0';		//tem has the reversed word
		
		//ask the user to input the option
		
		if(opt==1)
		increase(temp);		//this method increases by 3 and prints it
		else 
			decrease(temp);
	//printf("%s",c);
}




int main(){

	char ori[200];
	scanf("%[^\n]s",ori);	//input the message
	char temp[200][200];	//each row is a token for a word
	
	
			//to encode   		first put the string in matrix and reverse each string and while printing check  print
					int k=0;int j=0;		//k is row number   j is column
				for(int i=0;ori[i]!='\0';i++){
						if(ori[i]==' '){
							temp[k][j]='\0';		//end the existing string
							k++;		//move to next line
							j=0;		//and bring the coulmn back to 0;
						}

						else{
							temp[k][j]=ori[i];
							j++;
						}

				}
				temp[k][j]='\0';		//for the last word
				//debugger
				for(int i=0;i<=k;i++){
					printf("%s\n",temp[i]);
				}//works till here
					printf("Enter 1 to encode and 2 to decode ");
				int opt;
		scanf("%d",&opt);

				for(int i=0;i<=k;i++){
					reverse(temp[i],opt);		//reversing the tokens		//pass the option too 
				}

				printf("\n");

			//encoding ends here
	


	
	return 0;
}



