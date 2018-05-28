#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i;
    ll j=0;
    cin>>n;
    ll a[n],b[n];
    set<ll>s;
    for(i=0;i<n;i++) {
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<s.size()<<"\n";
    s.clear();
    for(i=n-1;i>=0;i--) { if(s.count(a[i])==0) b[j++]=a[i]; s.insert(a[i]);}
    for(i=j-1;i>=0;i--) cout<<b[i]<<" ";
    return 0;
}
