#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin,s);
    set<char>k;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='b'||s[i]=='c'||s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='g'||s[i]=='h'||s[i]=='i'||s[i]=='j'||s[i]=='k'||s[i]=='l'||s[i]=='m'||s[i]=='n'||s[i]=='o'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'||s[i]=='u'||s[i]=='v'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'||s[i]=='t'){
            k.insert(s[i]);
        }
    }
   cout<<k.size();
    return 0;
}
