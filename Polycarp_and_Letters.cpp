#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,i,t,k,q=0;
    string s;
    set<ll>r;
    cin>>n;
    cin>>s;
    k=0;
    for(i=0;i<s.length();i++){
        if(islower(s[i])){
            r.insert(s[i]);
            k=r.size();
        }
        else{ k=0; r.clear();}
        q=max(q,k);
    }
    cout<<q;
	return 0;
}
