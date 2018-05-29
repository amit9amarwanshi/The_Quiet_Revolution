#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    int m=max((max(a[0]+a[1]+a[2],(a[0]*a[1])+a[2])),max((a[0]+a[1])*a[2],a[0]*a[1]*a[2]));
    m=max(m,max(a[0]*(a[1]+a[2]),a[0]+(a[1]*a[2])));
    cout<<m;
    return 0;
}
