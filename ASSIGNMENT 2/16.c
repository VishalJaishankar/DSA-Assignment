#include<stdio.h>
#include<malloc.h>

void spiral(int ** a,int N){
	int k=0;	//index of starting row
	int l=0;	//index of starting colum
	int m=N;		//index of last row
	int n=N;		//index of last column
	int check=1;
	int i;
	while (k < m && l < n)
    {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i)
        {
            a[k][i]=check++;
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (i = k; i < m; ++i)
        {
             a[i][n-1]=check++;
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                a[m-1][i]=check++;
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                a[i][l]=check++;
            }
            l++;    
        }        
    }


    for(int i=0;i<N;i++){
    	for(int j=0;j<N;j++){
    		printf("%d ",a[i][j]);
    	}
    	printf("\n");
    }

}



int main(){

	//int ** arr;
	int n;
	scanf("%d",&n);		//r is row  c is column

	int** arr=(int **)malloc(n*sizeof(int *));
	for(int i=0;i<n;i++)
		arr[i]=(int*)malloc(n*sizeof(int));		//it will have square matrix of n*n
	
	//at this point the array is built
printf("The spiral form is\n");
	spiral(arr,n);

	free(arr);


}