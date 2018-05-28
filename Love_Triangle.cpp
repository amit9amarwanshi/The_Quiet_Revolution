#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,i;
    cin>>n;
    ll a[n+1],flag=0;
    for(i=1;i<n+1;i++) cin>>a[i];
    for(i=1;i<n+1;i++){
        if(i==a[a[a[i]]]){
            flag=1; 
            break;
        }
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
	return 0;
}
