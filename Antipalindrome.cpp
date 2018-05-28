#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
bool isPalindrome(string str)
{
    ll n = str.size();
    for (ll i=0; i < n/2; i++)
        if (str.at(i) != str.at(n-i-1))
            return false;
    return true;
}
ll m(string str)
{
    ll n = str.size();
    char ch = str.at(0);
    ll i = 1;
    for (i=1; i<n; i++)
        if (str.at(i) != ch)
            break;
    if (i == n)
        return 0;
    if (isPalindrome(str))
        return n-1;
    return n;
}
int main(){
    ll t,n,x,y,z,i,j,k,l;
    string s;
    cin>>s;
    cout<<m(s);   
    return 0;
}
