#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ans(string X, string Y, ll m, ll n)
{
	ll dp[m+1][n+1];
	for (ll i = 0; i <= m; i++) for (ll j = 0; j <= n; j++)	{
		if (!i) dp[i][j] = j;
		else if (!j) dp[i][j] = i;
		else if (X[i-1] == Y[j-1])	dp[i][j] = 1 + dp[i-1][j-1];
		else dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1]);
		}
	return dp[m][n];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll i,j=0,k=0,l=0;
        string s1,s2,s,t;
        cin>>s1>>s2; s=s1;t=s2;
        for(i=0;i<n;i++) if(s1[i]!=s1[i+1]) { s[j]=s1[i];j++;}
        for(i=0;i<m;i++) if(s2[i]!=s2[i+1]) { t[k]=s2[i];k++;}
        string a=s.substr(0,j);string b=t.substr(0,k); j=a.length();k=b.length();
        cout<<ans(a,b,j,k)<<"\n";
    }
    return 0;
} 
