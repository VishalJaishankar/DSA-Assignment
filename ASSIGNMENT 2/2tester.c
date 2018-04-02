#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char c[10]="Hello";

	char d[10];
	d=strrev(c);
	printf("%s",d);
}