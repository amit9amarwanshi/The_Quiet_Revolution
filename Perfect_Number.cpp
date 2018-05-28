#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,m=0,i,k,l=1;
    cin>>n;
    n++;
    ll a[n+1];
    for(i=19;l!=n;i+=9) {
        k=i;m=0;
        do {
        ll digit = k % 10;
        m+=digit;
        k /= 10;
        } while (k > 0);
        if(m==10) a[l++]=i;
       //cout<<i<<" ";
    }
    cout<<a[n-1];
    return 0;
}
