#include<bits/stdc++.h>
using namespace std;
int T,i;
long long N;
long long bp(long long x,int p);
 
int main()
{   
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld",&N);
        int mx = ceil( logl(N)/logl(2) );  
        bool yes = false;      
        for(i = 2; i <= mx && !yes; i++)
        {
             long long x = expl(logl(N)/i);
             if( bp(x-1,i) == N || bp(x,i) == N || bp(x+1,i) == N)
                yes = true;
        }
        printf("%s\n",yes?"YES":"NO");
    }       
        
    return 0;
}
    
long long bp(long long x,int p)
{
    long long ans = 1;
    while(p)
    {
        if(p&1) ans *= x;
        x *= x;
        p /= 2;
    }
    return ans;
} 
