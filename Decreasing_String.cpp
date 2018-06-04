#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i;
		cin>>n;
		ll a=n/25, b=n%25;
		string full = "abcdefghijklmnopqrstuvwxyz";
		string rev = full;
		reverse(rev.begin(), rev.end());
		if(b){
			for(i=b;i>=0;i--){
				cout<<full[i];
			}
		}	
		if(a){
		for(i=0;i<a;i++)
			cout<<rev;
		}
		cout<<endl;
	}
	return 0;
}  
