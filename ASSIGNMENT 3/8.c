#include<stdio.h>

void sortFisrtM(int a[20],int m){

	for(int i=0;i<m-1;i++){
		for(int j=0;j<m-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	

}

void check(int day[20],int start ,int end,int m,int n,int pos){

	//since day has first m alresdy sorted
	//insert number at end at its right position
	
	if(end==n-1)//base case
		return;
	//printf("here");
	int i=end;
	int key=day[i];
	i--;
	while(i>=start){//this inserts element at end in proper position between start and end-1
		if(key<day[i]){
			day[i+1]=day[i];
			i--;
		}
		else if(key>day[i] && i==end-1)//takes care if key is the largest element 
			break;
		else{
			day[i]=key;
			break;

		}
	}
	if(i<start)	//all elements are greater than this so put it in the first position
		day[start]=key;

//code to check the median 


	for(int i=0;i<n;i++)//debugger
		printf("%d ",day[i]);
	printf("\n");

	check(day,start+1,end+1,m,n,pos+1);		//do the same thing for contigues array of size m


}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int day[20];
	printf("insert date:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&day[i]);

	sortFisrtM(day,m);
	printf("After sorting first m numbers:\n");
	for(int i=0;i<n;i++)
		printf("%d ",day[i]);
	printf("\n");
	//at this point the first m days are sorted and checking begins from here
	//check if themedian condition isd satisfied ormno
/*	if(m%2!=0)//if m is even{
	{
		if(day[m]>3*day[m/2])
			printf("1 ");
		else 
			printf("0 ");
	}
	else{
		int k=m/2;
		int med=(day[k]+day[k-1])/2;//this will have the median
		if(day[m]>3*med)
			printf("1 ");
		else 
			printf("0 ");
	}
	//above takes care of the first day of evaluation
*/
	if(n-m==1)	//then only one evaluation will be there
		return 0;
	check(day,1,m,m,n,m+1);// you are checking the index at mth position


}