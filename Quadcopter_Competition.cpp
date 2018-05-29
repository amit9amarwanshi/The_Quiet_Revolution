#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int x1,y1,x2,y2,d1=0,d2=0,ans;
   cin>>x1>>y1>>x2>>y2;
   if(x1==x2) {d1=abs(y1-y2)+3; d2=abs(y1-y2)+3;}
   else if(y1==y2){ d1=abs(x1-x2)+3;d2=abs(x1-x2)+3;}
   else 
   {
       d1=abs(x1-x2-1)+abs(y1-y2)+2;
       d2=abs(x1-x2+1)+abs(y1-y2)+2;
   }
 //  cout<<d1<<" "<<d2;
   ans=d1+d2;
   cout<<ans;
    return 0;
}
