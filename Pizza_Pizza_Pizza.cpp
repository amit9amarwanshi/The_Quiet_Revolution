#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    if(n==0) cout<<n;
    else if(n%2==0) cout<<n+1;
    else cout<<(n+1)/2;
    return 0;
}
