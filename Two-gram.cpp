#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i;
    string s,k;
    cin>>n>>s;
    multiset<string>s1;
    for(i=0;i<s.length()-1;i++){
        string t;
        t.push_back(s[i]);
        t.push_back(s[i+1]);
        s1.insert(t);
    }
    ll max=0;
    for(i=0;i<s.length()-1;i++){
        string t;
        t.push_back(s[i]);
        t.push_back(s[i+1]);
        if(max<s1.count(t)){
            max=s1.count(t);
            k=t;
        }
    }
    cout<<k;
    return 0;
}
