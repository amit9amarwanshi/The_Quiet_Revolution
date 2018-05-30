#include <iostream>

using namespace std;

int main()
{
    int n,m,t;
    cin>>n>>m;
    if(n==m)
    {
        if(n%2==0)
            cout<<"Malvika";
        else
            cout<<"Akshat";
            return 0;
    }

      if((n%2==0)&&(m%2==0)) {cout<<"Malvika"; return 0;}
      if((n%2!=0)&&(m%2!=0)) {cout<<"Akshat";return 0;}
      if(n>m)t=n;
      else t=m;
      if(t%2!=0)cout<<"Malvika";
      else  cout<<"Akshat";
    return 0;
}
