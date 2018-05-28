#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(n%2==0) cout<<a[n/2-1];
    else cout<<a[n/2];
    return 0;
}
