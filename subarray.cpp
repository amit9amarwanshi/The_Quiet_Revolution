#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(ll a[],ll n){
    ll dp[n+1][n+1],i,j,m=0;
    for(i=0;i<=n;i++){ dp[0][i]=0;dp[0][j]=0;}
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            if(i==j) dp[i][j]=1;
            else if(a[i]>=a[j]) dp[i][j]=j-i+2;
            else dp[i][j]=dp[i][j-1];
            m=max(m,dp[i][j]);
        }
    }
    return m;
}
int main() {
	ll n,k,t;
	cin>>t;
	while(t--){
	     cin>>n;
	     ll a[n];
	     for(ll i=0;i<n;i++) cin>>a[i];
	     cout<<solve(a,n)<<"\n";
	}
	return 0;
}
