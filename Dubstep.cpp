#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int i;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            cout<<" ";
        }
        else
        {
            cout<<s[i];
        }
    }
	return 0;
}
