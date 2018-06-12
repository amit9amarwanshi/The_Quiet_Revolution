#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[100000]={0};
bool Palindrome(ll f[], ll len){   ll o = 0;
	for (ll i=0; i<26; i++)	if (f[i]%2 != 0)	o++;
	if (len%2 == 0)	{
		if (o> 0)	return false;
		else	return true;}
		if (o!= 1) return false;
    return true;
}
string find(ll f[]){
	string o="";
	for (ll i=0; i<26; i++){
		if (f[i]%2 != 0){
			f[i]--;
			o=o+(char)(i+'a');
			return o;
		}
	}
	return o;
}
string findPalindromic(string s)
{
	ll l = s.length();
	ll f[26] = {0},i=0,m=0,n=l-1,count=0,k;
	for(i=0; i<l; i++) f[s.at(i) - 'a']++;
	if (!Palindrome(f, l))	return "-1";
	string o = find(f);
	string fr= "", r= " ";
    for (i=0; i<26; i++){
		string temp = "";
		if (f[i] != 0)	{
			char ch = (char)(i + 'a');
           for (ll j=1; j<=f[i]/2; j++)  temp = temp + ch;
            count=0; 
	        for(k=0;k<s.length();k++){
	            if(count==temp.length()) break;
	            if(temp[0]==s[k]){ s[k]='*';a[m++]=k+1; count++;}
	        }count=0;
	        for(k=s.length();k>0;k--){
	            if(count==temp.length()) break;
	            if(temp[0]==s[k]) { s[k]='*';a[n--]=k+1;count++;}
	        }
		}
    }
    if(o[0]!='\0') for(k=0;k<o.length();k++){
        for(i=0;i<l;i++){
         if(o[k]==s[i]) { a[m++]=i+1; break;k++;}
        }
    }
    return s;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n,i,j;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        a[s.length()]={0};
	    string t=findPalindromic(s);
	    if(t=="-1") cout<<-1<<"\n";
	    else {
	        for(i=0;i<s.length();i++) cout<<a[i]<<" ";
	        cout<<"\n";
	    }
    }
	return 0;
}
