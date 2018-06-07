#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main() {
	ll t, n, m,x,i,j;
	cin>>t;
	while(t--){n=m=x=0;
        string s;	    
        cin>>s;
	    for(i=0;i<s.length();i++){
	       if(s[i]=='A'){
	           n++;x=0;
	           for(j=i+1;j<s.length();j++){
	               x++;i++;
	               if(s[j]=='B'){
	                   break;
	               }
	               else if(s[j]=='A'){
	                 n+=x;x=0;
	               }
	           }
	           
	       }
	   if(s[i]=='B'){x=0;m++;
	           for(j=i+1;j<s.length();j++){
	               x++;i++;
	               if(s[j]=='A'){i--;
	                   break;
	               }
	               else if(s[j]=='B'){
	                   m+=x;x=0;
	               }
	           }
	       }
	    }
	    cout<<n<<" "<<m<<"\n";
	}
	return 0;
}
