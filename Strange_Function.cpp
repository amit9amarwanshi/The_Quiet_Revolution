#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll newq(ll x,ll n){
    if(n==0) {
        return 1%9;
    }
    ll ans=newq(x,n/2);
    ans=(ans*ans)%9;
    if(n%2==1) {
        ans=(ans*x%9);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	ll test;
	cin>>test;
	while(test--){
	    ll x,n,a;
	    cin>>x>>n;
	    a=newq(x,n);
	   if (x == 0){
	        cout<<"0"<<endl;
	   }
       else if(a==0) {
           cout<<"9"<<endl;
       }
       else {
           cout<<a<<endl;
       }
       
	}
	return 0;
} 
