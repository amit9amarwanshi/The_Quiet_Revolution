#include <iostream>
using namespace std;
 
int main() {
	int x,i,j;
	cin>>x;
	while(x--)
	{
	    int count=0;
	    string s;
	    cin>>s;
	    for(i=0;i<s.length();i++)
	    {   
	        for(j=0;j<s.length();j++)
	        {   if(count==2)
	            {
	                goto x;
	            }
	            if(s[i]==s[j])
	            {
	                if(i!=j)
	                {count++;}
	            }
	        }
	    }
	    x:
	    if(count!=2)
	    {
	        cout<<"no\n";
	    }
	    else
	    {
	        cout<<"yes\n";
	    }
	    
	}
	return 0;
} 
