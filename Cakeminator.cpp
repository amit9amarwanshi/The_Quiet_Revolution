#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
char a[15][15];
int r[15], c[15];

int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, ret = 0;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> a[i][j];
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) if(a[i][j] == 'S') {r[i]++; c[j]++;}
    for(int i = 0; i < n; ++i) if(r[i] == 0) for(int j = 0; j < m; ++j)  a[i][j] = 'X';
    for(int j = 0; j < m; ++j) if(c[j] == 0) for(int i = 0; i < n; ++i)    a[i][j] = 'X';
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) if(a[i][j] == 'X') ret++;
    cout << ret <<"\n";
     return 0;
 }
