#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,m,i,j;
    cin>>n;
    ll a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
 
