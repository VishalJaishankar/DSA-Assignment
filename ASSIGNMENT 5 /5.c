#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>


int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int findmedian(int a[],int n)
{
    qsort(a,n,sizeof(int),cmpfunc);
    return a[n/2];
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int a[],int l,int r,int x)
{
    int i;
    for(i=l; i<=r-1; i++)//l to r-1
    {
        if(a[i]==x)
        {
            break;
        }
    }
    swap(&a[i],&a[r]);//pivot it

    i=l;
    int j ;
    for(j=l; j<=r-1; j++)
    {
        if(a[j]<=x)
        {
            swap(&a[i],&a[j]);//smaller than the pivot to its left
            i++;
        }
    }
    swap(&a[i],&a[r]);//final swap
    return i;
}

int klarge(int a[],int l,int r,int k)
{
    if (k > 0 && k <= r - l + 1)
    {
        int n=r-l+1;
        int med[(n+4)/5];
        int i=0;
        for(i=0; i<n/5; i++)
        {
            med[i]=findmedian(a+l+i*5,5);
        }


        if(i*5<n)
        {
            med[i]=findmedian(a+i*5+l,n%5);
            i++;//i++;
        }

        int medofmed=(i==1)? med[i-1] : klarge(med,0,i-1,i/2);//if i=1 and using recursion


        int pos=partition(a,l,r,medofmed);

        if((pos-l) == (k-1))
            return a[pos];
        if(pos-l>k-1)
            return klarge(a,l,pos-1,k);
        return klarge(a,pos+1,r,k-pos+l-1);
    }
    return INT_MAX;
}

int main()
{
    int n,k;

   scanf("%d %d",&n,&k);

    int a[n],i;
    for( i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

   printf("%d",klarge(a,0,n-1,k));


    return 0;
}