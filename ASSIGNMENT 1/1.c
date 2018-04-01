#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int test;
	char mat[20][20];		//matrix to store the string
	scanf("%d",&test);
	while(test--){
			char s[100];		//the original string  also top right
			printf("Enter string\n");
			scanf("%s",s);	//input the string
			int length=strlen(s);	//has the length of string
			int root=sqrt(length);	//root will contain length of matrix
			if(root*root!=length){	//if length is not a perfect square then print no
				printf("NO\n");
				continue;
			}
				int iter=0;
			for(int i=0;i<root;i++){
				for(int j=0;j<root;j++){
						mat[i][j]=s[iter++];	//fill the matrix with the string
				}
			}
				/*
			for(int i=0;i<root;i++){
				for(int j=0;j<root;j++){
					printf("%c",mat[i][j]);

				}
				printf("\n");
			}
				*/

			//trying brute here//

			//traverse in all 3 ways and check if the string formes is same or not//

			//top down//

			char temp[100];
			iter=0;
			for(int i=0;i<root;i++){
				for(int j=0;j<root;j++){
					temp[iter++]=mat[j][i];
				}
			}
			temp[iter]='\0';	//complete the string
			//printf("%s",temp);
			if(strcmp(temp,s)!=0){
				printf("NO\n");
				continue;			
			}


			//printf("YES\n");

			//right up//
			iter=0;
			for(int i=root-1;i>=0;i--){
				for(int j=root-1;j>=0;j--){
					temp[iter++]=mat[j][i];
				}
			}
			temp[iter]='\0';
			//printf("%s",temp);

			if(strcmp(temp,s)!=0){
				printf("NO\n");
				continue;			
			}

			//bottom left//

			iter=0;
			for(int i=root-1;i>=0;i--){
				for(int j=root-1;j>=0;j--){
					temp[iter++]=mat[i][j];
				}
			}
			temp[iter]='\0';

			if(strcmp(temp,s)!=0){
				printf("NO\n");
				continue;			
			}

			printf("YES\n");


	}
	return 0;


}