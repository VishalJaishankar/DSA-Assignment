#include<stdio.h>
#include<string.h>
#include<stdlib.h>




int getDigits(int n){
	int d=1;
	int i=0;
	while(d<n){
		d*=10;
		i++;
	}
	printf("%d %d\n",i,d);
	return i;
}
int main()
{
	int p=getDigits(4);
	return 0;
}