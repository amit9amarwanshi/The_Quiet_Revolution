#include<bits/stdc++.h>
using namespace std;
int pre[100005];
int prefix_compute(string p){
	int m = p.length();
	int i,k=0;
	pre[0]=0;
	pre[1]=0;
   	for(int q=2;q<=m;q++){
		while( k>0 &&( p[k+1]!=p[q])) k=pre[k];
		if(p[k+1] == p[q]) k=k+1;
		pre[q] = k;
	}
	return 0;
}
bool check(string s,string p){
	int n=s.length();
	int m=p.length();
	int i,q=0;
	for(i=1;i<=n;i++){
		while(q>0&&p[q+1]!=s[i]) q=pre[q];
		if(p[q+1]==s[i]) q=q+1;
		if(q+1==m){ cout<<i-m+1<<" "<<i<<"\n"; q=pre[q]; return 1;}
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,i,j,k,l;
	string s,p;
	cin>>t;
	while(t--){
		cin>>s>>p;
		p=' '+p;
		s=' '+s;
		k=prefix_compute(p);
		p.erase(p.begin());
		cout<<s<<" "<<p<<"\n";
		cout<<check(s,p)<<"\n";
	}
	return 0;
}