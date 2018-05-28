#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
	ll k,n,i,best=0;
	cin>>n>>k;
	ll a[n];
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	for(i=0;i<n;i++){
	    if(k%a[i]==0&&a[i]>best){
	        best=a[i];
	    }
	}
	ll j=k/best;
	cout<<j<<"\n";
	return 0;
}
