#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    ll x=s.length()-1,k,flag=0,i;
    if(s[0]=='-'){
        if(s[x]>=s[x-1]) k=x;
        else k= x-1;
        s.erase(s.begin()+k);
        for(i=1;i<x;i++) if(s[i]=='0') flag++;
        if(flag==i-1) cout<<0;
        else cout<<s;
    }
    else cout<<s;
    return 0;
}
