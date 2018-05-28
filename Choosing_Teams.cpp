#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,i,cnt=0;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=2;i<n;i+=3)
    {
        if(5-a[i]>=k)
          cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
