#include<stdio.h>
#include<string.h>
int main(){
	char key[200];
	char sent[200];

	scanf(" %s",key);
	scanf(" %[^\n]s",sent);
	int keylen=strlen(key);
	int sentlen=strlen(sent);
	printf("%d %d\n",keylen,sentlen);

	int i=0;		//traverses key
	int j=0;		//traverses sent


	while(i<keylen && j<sentlen){
		if(key[i]==sent[j]){
			i++;j++;
		}
		else 
			j++;


	}

	if(i==keylen){
		printf("YES\n");
	}

	else if(j==sentlen){
		printf("NO\n");
	}

}