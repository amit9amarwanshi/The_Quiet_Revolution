#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,i,k;
    cin>>n>>k;
    ll a[k+1],flag=0;
    for(i=1;i<k+1;i++) cin>>a[i];
    ll ans=1,mi=n%a[1];
    for(i=2;i<k+1;i++){
        if(n%a[i]<mi){
            mi=n%a[i];
            ans=i;
        }
    }
    cout<<ans<<" "<<n/a[ans]<<"\n";
	return 0;
}
