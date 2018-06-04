#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        set<ll> s;
        ll a[n],j=0,l,i;
        for(i=0;i<m;i++){
            cin>>l; s.insert(l);
        }
        for(i=1;i<=n;i++){
            if(s.count(i)!=1){
                a[j]=i;j++;
            }
        }
        for(l=0;l<j;l++){
            if(l%2==0) cout<<a[l]<<" ";
        }
        cout<<"\n";
        for(l=1;l<j;l++){
            if(l%2!=0) cout<<a[l]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
