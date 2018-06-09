#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test,n,i;
    cin>>test;
    while(test--){
        cin>>n;
        int c1=0,c2=0;
        string s,q,m;if(n==0){
        cout<<"Draw\n";
        continue;
        }
        cin>>s;c1++;
        for(i=1;i<n;i++){
            cin>>m;
            if(m==s){
                c1++;
            }
            if(m!=s){
                c2++;
                q=m;
            }
        }
        if(c1>c2){
            cout<<s<<"\n";
        }else if(c2>c1){
            cout<<q<<"\n";
        }else{
            cout<<"Draw\n";
        }
    }
    return 0;
}
