#include <iostream>
using namespace std;
int main() {
	int t,count1=0,count2=0,i;
	cin>>t;
	char s[t];
	for(i=0;i<t;i++) 
	{
	    cin>>s[i];
	    if(s[i]=='F'&&s[i-1]=='S')
	    {
	        count1++;
	    }
	    else if(s[i]=='S'&&s[i-1]=='F')
	    {
	        count2++;
	    }
	}
	if(count1>count2)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	return 0;
}
