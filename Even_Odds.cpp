#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,j=1,i=0,k;
    cin>>n>>k;
    n=(n+1)/2;
	cout << (k > n ? 2 * (k - n) : 2 * k - 1);
    return 0;
}
