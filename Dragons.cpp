#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s,n,i,j=0,a,b;
    cin>>s>>n;
    vector <pair<int,int> >p;
    for(i=0;i<n;i++){
            cin>>a>>b;
            p.push_back( make_pair(a,b) );
    }
    sort(p.begin(),p.end());
    for(i=0;i<n;i++){
            if(s>p[i].first){
                s+=p[i].second;
            }
            else{
            j=1;break;}
    }
    if(j==1) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
