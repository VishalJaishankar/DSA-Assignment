#include<stdio.h>
#include<math.h>
#define Lim  1000000
 
 long long lcm[1000010]  ;
 long long  a[1000010];
 
void lcm_sum()//euler totient function
        { int i,j;
           for(i=1;i<=Lim;i++ )
                 lcm[i]=i;

           for(i=2;i<=Lim;i++)
            if (lcm[i]==i)
               for(j=2*i;j<=Lim;j+=i)
                lcm[j] -=  lcm[j]/ i ;
           

           for( i=2 ; i<= Lim ; i++)
               if ( lcm[i]==i) 
                lcm[i] = i-1;
 	  
          for( i=1;i<=Lim;i++)
              for (j=i;j<=Lim;j+=i)
                   a[j]+= i*lcm[i];
        }
 
     int main()
        {
           lcm_sum();
           int n,t , i, sqt;
           long long sum;
 
           for(scanf("%d",&t ) ; t>0 ; t--)
           {
              scanf("%d",&n);
              sum = ( 1 + a[n] ) * n / 2;
              printf("%lld\n",sum);
 
 
           } return 0;
        }