#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<k;i++){
        if(n%10!=0) n--;
        else n/=10;
    }
    cout<<n;
    return 0;
}
