#include <iostream>
using namespace std;
 
int main() {
	long int x,n,i;
	cin>>x;
	if(x<=20)
	{
	while(x--)
	{
	    int count=0;
	    cin>>n;
	    for(i=2;i<10000;i++)
	    {
	        if(n%i==0)
	        {
	            if(n!=i) count++;
	        }
	    }
	    
	    if(n==1)
	    {
	        count++;
	    }
	    if(count==0)
	    {
	        cout<<"yes\n";
	    }
	    else
	    {
	        cout<<"no\n";
	    }
	    count=0;
	}
	
	}
	return 0;
}
