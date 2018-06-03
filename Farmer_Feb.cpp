#include <bits/stdc++.h>
using namespace std;
 
#define ll unsigned long int
 
bool isprime(ll n){
	if(n==1){
		return false;
	}
	if(n==2){
		return true;
	}
	if(n%2==0){
		return false;
	}
	for(ll i=3;i<=sqrt(n);i+=2){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
 
int main() {
    ll t,n,m,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        n+=m;
        for(i=n+1;;i++)
        {
            if(isprime(i))
            {
               cout<<i-n<<"\n";
               break;
            }
        }
    }
    
   
	return 0;
}
