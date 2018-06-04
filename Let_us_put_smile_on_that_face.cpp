 #include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	ll t,n,m,x,i,j,k,flag;
	cin>>t;
	string s;
	while(t--){
	    cin>>n>>m;
	    x=0;
	    flag=0;
	    string s[n];
	    cin>>s[0];
	    for(i=1;i<n;i++){
	        cin>>s[i];
	        if(s[i].length()>s[i-1].length()){
	        for(j=0;j<s[i].length();j++){
	            for(k=0;k<s[i-1].length();k++)
	            {
	                if(s[i][j]==s[i-1][k]) {flag=1;
	                break;}
	           }
	    }
	    if(flag==0) x++;}
	    else if(s[i].length()<=s[i-1].length()){
	        for(j=0;j<s[i-1].length();j++){
	            for(k=0;k<s[i].length();k++)
	            {
	                if(s[i-1][j]==s[i][k]) {flag=1;
	                break;}
	           }
	    }
	    if(flag==0) x++;}
	    flag=0;
	    }
	    if(x>m) cout<<"Very poor choice of words\n";
	    else cout<<"Welcome to a world without rules\n";
	}
	return 0;
} 
