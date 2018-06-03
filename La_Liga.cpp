#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    int x;
    vector<string> v;
    vector<int> g;
    for(int i=0;i<4;i++)
    {
        cin>>s>>x;
        v.push_back(s);
        g.push_back(x);
    }
    
    vector<int> r(4,0);
    for(int i=0;i<4;i++)
    {
        if(v[i][0]=='R')
        r[0]=g[i];
        else if(v[i][0]=='B')
        r[2]=g[i];
        else if(v[i][0]=='M')
        r[1]=g[i];
        else
        r[3]=g[i];
    }
    if(r[0]>=r[1]||r[2]<=r[3])
    cout<<"RealMadrid"<<endl;
    else
    cout<<"Barcelona"<<endl;
    
    }
 
	return 0;
} 
