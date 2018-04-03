#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char str[200],int start,int end ){
	int i=start;
	int j=end;
	while(i<j){
		char temp=str[j];
		str[j]=str[i];
		str[i]=temp;

		i++;
		j--;
	}
}
int main(){
	char str[200];
	scanf("%[^\n]s",str);
	int i=0;int j=0;
	int len=strlen(str);
	printf("%d\n",len);
	while(j<len && i<len){
			while(str[j]!=' ' && j<len){
			j++;
		}
		//printf("%d\n",j);
			//at this point we have j pointing to a space character
			reverse(str,i,j-1);//j-1 willl be a non space
			//printf("%s\n",str );
			j++;
			i=j;

			//j p

	}
	//reverse(str,0,strlen(str)-1);
	
	reverse(str,0,len-1);
	printf("%s\n",str);
}