#include <iostream>
using namespace std;
 
int main() {
	int x;
	cin>>x;
	int n;
	if(x<=1000)
	{  
	    while(x--)
	    {
	    cin>>n;
	    if(n>=-20&&n<=20)
	    {
	        if(n<10)
	        {
	            cout<<"What an obedient servant you are!\n";
	        }
	        else
	        {
	            cout<<"-1\n";
	        }
	    }
	    else
	    {
	        cout<<"-1\n";
	    }
	    }
	}
	return 0;
}
 
