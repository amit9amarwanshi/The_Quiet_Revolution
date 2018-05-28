#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i;
    ll j=0,k=0;
    cin>>n;
    char a;
    set<ll>s;
    for(i=0;i<n;i++) {
        cin>>a;
        if(a=='x') j++;
        else j=0;
        if(j>=3) k++;
    }
    cout<<k;
    return 0;
}
