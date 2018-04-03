#include <stdio.h>
 
int main()
{
    int t,n,input,a[101],i,temp,j,k,count;
    scanf("%d",&t);
 
    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%d",&n);
 
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==j+1) continue;
            for(k=0;k<n;k++)
            {
                if(a[j]==k+1)
                {
                    temp=a[j];
                    a[j]=a[k];
                    a[k]=temp;
                    count++;
                    j=-1;
                    break;
                }
            }
        }
        printf("Case %d: %d\n",i+1,count);
 
    }
    return 0;
}