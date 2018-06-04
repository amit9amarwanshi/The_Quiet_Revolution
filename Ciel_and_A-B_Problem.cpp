#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,a[10],j,i=0;
    cin>>n>>m;
    n=n-m;
    do {
    ll digit = n% 10;
    a[i]=digit;
    i++;
    n /= 10;
    } while (n > 0);
    for(j=i-1;j>=0;j--){ 
        if(a[j]!=1&&j==i-1) cout<<1;
        else if(j==i-1) cout<<2;
        if(j!=i-1) cout<<a[j];
    }
    return 0;
} 
