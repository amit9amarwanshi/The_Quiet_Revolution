#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n],mi=10000000001;
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(ll i=1;i<n;i++) mi=min(mi,a[i]-a[i-1]);
        cout<<mi<<"\n";
    }
    return 0;
} 
