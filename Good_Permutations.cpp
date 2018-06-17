#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,i,j,cnt,k,l,ans;
    cin>>l;
    while(l--){
        vector<int> p;
        cin>>n>>k;
        ll a[n],b[n],c=0;
        set<ll>s;
        for(i=0;i<n;i++) { cin>>a[i]; s.insert(a[i]);b[i]=a[i];}
        for(i=1;i<=n;i++)
        {
            if(s.count(i)==0) p.push_back(i);
        }
        do{ 
            j=0;cnt=0;
            for(i=0;i<n;i++)
            {
                if(b[i]==0) a[i]=p[j++];
            }
            for(i=1;i<n;i++) {
                if(a[i]>a[i-1]) cnt++;
            }
            if(cnt==k) c++;// cout<<cnt<<" ";
        }while(next_permutation(p.begin(),p.end()));
        cout<<c<<"\n";
    }
    return 0;
} 
