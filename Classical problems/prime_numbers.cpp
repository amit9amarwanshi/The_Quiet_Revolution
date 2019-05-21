#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> prime;
bool check(ll num){
	if(num==1) return 0;
	if(num==2||num==3||num==5) return 1;
	if(num%2==0) return 0;
	for(ll i=3;i<=sqrt(num);i+=2){
			if(num%i==0) return 0;
	}
	return 1;
}
int create_prime(){
    for(ll i=2;i<32000;i++){
        if(check(i)) prime.push_back(i);
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	ll t,i,j,k,l,n,m,t_wt;
	create_prime();
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(ll num=n;num<=m;num++){
		    ll flag=0;
		    for(ll i=0;prime[i]<=sqrt(num);i++){
		    	if(num%prime[i]==0) { flag=1;break;}
        	}
        	if(flag==0&&num!=1) cout<<num<<"\n";
	    }
		cout<<"\n";
	}
}