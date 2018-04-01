#include<stdio.h>
#include<string.h>
char ori[200];

void good(char key[20],int keyindex,int oriIndex);
int isPresent(char c,int index){		//checks if the char is present after the index 
	//	int length=strlen(ori);
		for(int i=index+1;i<strlen(ori);i++){		//note the index+1 to tell the search is from the next index
			if(ori[i]==c)
				return 1;		//return  true if the char is present betweenthe index 
		}
		return 0;			//else retrun  false


}


int giveIndex(char c,int index){			//returns the index of c after index
	for(int i=index+1;i<strlen(ori);i++){
			if(ori[i]==c)
				return i;	//returns the index of the character  called if only the character is present 
		}
		
}


int main(){
	char key[20]="goodbye";
	int keylength=strlen(key);
	scanf("%s",ori);		//input the string to check
	good(key,0,-1);//fist 0 is for index of key, second is index for the input


	
return 0;
}
void good(char key[20],int keyindex,int oriIndex){

	//base case

	if(keyindex==strlen(key)){		//the fact the recursion reached this point is because it passed all the letters
		printf("YES\n");
		return ;
	}



	if(isPresent(key[keyindex],oriIndex)){			//check for the character in the index
			int index=giveIndex(key[keyindex],oriIndex);	//get the occurance of the character

				good( key, keyindex+1,index);//do same thing for next character 



	}

	else printf("NO\n");
	return;


}