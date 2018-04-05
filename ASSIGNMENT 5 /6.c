

#include<stdio.h>
#include<stdlib.h>

long long int cache[100][100];
long long int m,k;
long long int ncr(long long int n,long long int r)
{

	if(n<r)
	return 0;
    if(r==0||r==n)
        return 1;
    if(cache[n][r])
        return cache[n][r];
    cache[n][r]=ncr(n-1,r-1)+ncr(n-1,r);
    return cache[n][r];


}
long long int f(long long int x)
{
    long long int ans=0;
    long long int rem1s=k;
    long long int i;
    for(i=60;i>=0;i--)
    {
           //long long temp=(long long)1<<(long long)i;

        if(x & (long long)((long long)1<<(long long)i))
        {
            long long int rempos=i;
            if(rempos<=0)
            {
                continue;

            }
            ans+=ncr(rempos,rem1s);
            rem1s--;
            if(rem1s<0)
                break;
        }
    }
    long long int ct=0;
    while(x>0)
    {
            ct+=x%2;
            x/=2;

    }
    if(ct==k)
    {
        ans++;
    }
    return ans;

}
long long int check(long long int x)
{
    long long int satisfy=f(2*x)-f(x);
    return (satisfy>=m);

}
long long int binsearch(long long int lo,long long int hi)
{
    while(lo<hi)
    {
        long long int mid=(lo+hi)>>1;
        if(check(mid))
        {
            hi=mid;

        }
        else
        {
            lo=mid+1;
        }

    }
    return lo;
}
int main()
{
   scanf("%lld%lld",&m,&k);

    //long long temp =(long long)1<<60;
    //printf("%lld",temp);
    long long int ans=binsearch(1,1e18);
    printf("%lld",ans);
    return 0;
}
