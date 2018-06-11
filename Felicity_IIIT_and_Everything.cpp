#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,j;
    string s;
    cin>>t;
    while (t--) {
    cin>>s;
    for(j=0;j<s.length();j++){
        if(s[j]=='*') break;
        cout<<s[j];
    }   
    cout<<"\n";
    }
    return 0;
}
