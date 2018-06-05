#include <bits/stdc++.h>
using namespace std;
 
int main() {
	unsigned int t,n,i;
	cin>>t;
	while(t--)
	{
	    unsigned int j=0,k=0, l=0,m=0,h=0;
	    cin>>n;
	    string s[n];
	    for(i=0;i<n;i++) 
	    {
	        cin>>s[i];
	        if(s[i]=="cakewalk")
	        {
	           j++;
	        }
	        else if(s[i]=="simple")
	        {
	           k++;
	        }
	        else if(s[i]=="easy")
	        {
	            l++;
	        }
	        else if(s[i]=="easy-medium"||s[i]=="medium")
	        {
	            m++;
	        }
	        else if(s[i]=="medium-hard"||s[i]=="hard")
	        {
	            h++;
	        }
	    }
	    if(k>=1&&l>=1&&m>=1&&h>=1&&j>=1)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}
	return 0;
} 
