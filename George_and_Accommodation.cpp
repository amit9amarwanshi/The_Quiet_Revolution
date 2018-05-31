#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n,count=0,i;
    cin>>n;
    unsigned int a[n][2];
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        if((a[i][1]-a[i][0])>=2)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
