#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]==1) cout<<"YES";
    else if(a[0]==2&&a[1]==2) cout<<"YES";
    //else if(a[0]==2&&a[1]==3&&a[2]==3) cout<<"YES";
    else if(a[0]==2&&a[1]==4&&a[2]==4) cout<<"YES";
    else if(a[0]==3&&a[1]==3&&a[2]==3) cout<<"YES";
    else cout<<"NO";
    return 0;
}
