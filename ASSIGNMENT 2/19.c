#include<stdio.h>
#include<string.h>

void word(char str[200]){
	char map[10][5]={' ','0','\0','\0','\0',
					'1','\0','\0','\0','\0',
					'a','b','c','2','\0',
					'd','e','f','3','\0',
					'g','h','i','4','\0',
					'j','k','l','5','\0',
					'm','n','o','6','\0',
					'p','q','r','s','7',
					't','u','v','8','\0',
					'w','x','y','z','9'	};


	for(int i=0;i<strlen(str);){
			if(str[i]==' ')
				i++;
			char c=str[i];
			int j=i;
			int temp=0;
			while(str[j]==c){
				temp++;
				j++;
			}
			//printf("char:%c freq:%d index j:%d and key is:%c\n",c,temp,j,map[c-48][temp-1]);
			if(c=='1')
				printf("1");
			else
				printf("%c",map[c-48][temp-1]);
			i=j;
	}

}

int main(){
	char str[200];

	scanf(" %[^\n]s",str);//input the numeric statement
	word(str);

}