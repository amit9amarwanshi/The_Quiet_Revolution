#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,m,mi=1000000;
    cin>>m>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<=n-m;i++){
        mi=min(a[m+i-1]-a[i],mi);
    }
    cout<<mi;
    return 0;
}
