#include <iostream>
#include<string>
using namespace std;

int main()
{
    int i,j;
    string a;
    string b=".";
    cin>>a;

    for(i=0;i<a.length();++i)
     {
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='U'||a[i]=='Y'||a[i]=='O'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='y'||a[i]=='u')
            {
                a.erase(i,1);
                --i;
            }
            else
            {
                a.insert(i,b);
                ++i;
            }
           if(a[i]>64&&a[i]<92)
            a[i]=a[i]+32;

     }
    cout<<a;
    return 0;
}
