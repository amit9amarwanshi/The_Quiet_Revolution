#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 10000000000
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n;
    cin>>t;
    while(t--){
        ll a[4];
        for(ll i=0;i<4;i++) cin>>a[i];
        sort(a,a+4);
        if(a[0]==a[1]&&a[2]==a[3]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
