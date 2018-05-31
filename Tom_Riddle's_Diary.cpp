#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    unsigned long int kiss;
    cin>>kiss;
    string s[kiss];
    unsigned long int i,j,c=0;
    for(i=0;i<kiss;++i)
    {
        cin>>s[i];
        c=0;
        if(i==0){
            cout<<"NO"<<endl; c++;
        }
        for(j=0;j<i&&i>0;++j)
        {
            if(i==j)continue;
            if(!(s[i].compare(s[j])))
            {
                cout<<"YES"<<endl;
                c++;
                break;
            }

        }
        if(c==0)  cout<<"NO"<<endl;
    }
    return 0;
}
