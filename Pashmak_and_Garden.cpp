#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2||y1==y2||abs(x1-x2)==abs(y1-y2)){
        if(y1==y2) cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y1+abs(x2-x1);
        else if(x1==x2) cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x1+abs(y2-y1)<<" "<<y2;
        else cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
    else cout<<"-1\n";
    return 0;
}
