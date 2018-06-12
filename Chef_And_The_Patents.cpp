#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n,i=0,k,m,x;
    cin>>t;
    while(t--){
        char ch;
        ll e=0,o=0,count=0;
        cin>>n>>m>>x>>k;
        for(i=0;i<k;i++){
            cin>>ch;
            if(ch=='E') e++;
            else if(ch=='O') o++;
        }
        for(i=1;i<=m;i++){
            if(i%2==0){
                if(x>=e) { count+=e; e=0;}
                else {
                    count+=x;
                    e=e-x;
                }
            }
            else {
                if(x>=o) { count+=o; o=0;}
                else {
                    count+=x;
                    o=o-x;
                }
            }
            if(count>=n) break;
        }
        if(count>=n) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
} 
