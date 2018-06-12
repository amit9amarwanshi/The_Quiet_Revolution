#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t,n,i;
    cin>>t;
    while(t--){
        string s;
        int c=0,j=0,k;
        set<char> v;
    	cin>>s;
    	for(i=0;i<s.length();i++){
	    if(s[i]=='c'||s[i]=='h'||s[i]=='e'||s[i]=='f'){
	      for(j=i;j<i+4;j++){
	          if(s[j]=='c'||s[j]=='h'||s[j]=='e'||s[j]=='f'){
	              v.insert(s[j]);
	          }
	          if(v.size()==4) { c++; v.clear();}
	      }
	      v.clear();
	    }
	}
    if(c==0) cout<<"normal\n";
    else cout<<"lovely "<<c<<"\n";
    }
	return 0;
} 
