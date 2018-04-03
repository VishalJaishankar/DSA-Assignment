#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",str);
	int len=strlen(str);
	int mid=(len-1)/2;
	int i=mid-1;
	if(str[mid]!='9')
		str[mid]++;
	else
	{
		int flag=1;
		for(int i=0;i<=mid;i++)
			if(str[i]!='9')
				flag=0;

			if(flag==0){
		str[mid]='0';
		while(i>=0&& str[i]=='9'){
			str[i]='0';
			i--;
		}
		//if(i==-1)
			//str[0]='1';
		
		str[i]++;
		}
		else	
		{	
			printf("1");
			for(int i=1;i<len;i++)
				printf("0");
			printf("1");
			return 0;
		}

	}

	if(mid%2==0){
	for(int i=0;i<=mid;i++)
		printf("%c",str[i]);
	for(int i=mid;i>=0;i--)
		printf("%c",str[i]);
	printf("\n");

	}
	else{
		for(int i=0;i<=mid;i++)
			printf("%c",str[i]);
		for(int i=mid-1;i>=0;i--)
			printf("%c",str[i]);
			printf("\n");
		}

}