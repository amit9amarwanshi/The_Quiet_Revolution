#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    long long int n,j=-100000009,i,k;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++){
        k=sqrt(a[i]);
        if((a[i]>j)&&((k*k)!=a[i])){
            j=a[i];
        }
    }
    cout<<j<<"\n";
    return 0;
}
