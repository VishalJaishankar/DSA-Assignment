#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(char str1[100],char str2[100]){

	if(strlen(str1)>strlen(str2))//if the length or the first greater then return  greater
		return 1;
	//if they both have thet same length
	int i=0;
	int j=0;
	while(i<strlen(str1) && j<strlen(str2)){
		if(str1[i]>str2[j])//123>111
			return 1;
		else if(str1[i]<str2[j])
			return 0;
		else	{
			i++;
			j++;
		}
	}
	return 0;//at this point they ill be equal

}

void sort(char str[100][100],int n){//use bubble sort
	char temp[100];
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){

				if(compare(str[j],str[j+1])==1){//if str[j] is greater t hen str[j+1]
						//swap those
					printf("compare:%d %s %s\n",compare(str[j],str[j+1]),str[j],str[j+1]);
					strcpy(temp,str[j]);
					strcpy(str[j],str[j+1]);
					strcpy(str[j+1],temp);
				}
			}
		}

}

int main(){

	char set[100][100];
	int N;
	scanf("%d",&N);

	for(int i=0;i<N;i++)
		scanf("%s",set[i]);
	printf("Original input\n");
	for(int i=0;i<N;i++)
		printf("%s\n",set[i]);
	

	sort(set,N);

	printf("After sorting\n");
	for(int i=0;i<N;i++)
		printf("%s\n",set[i]);
	


}