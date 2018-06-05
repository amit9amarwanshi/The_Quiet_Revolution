#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    int t,j=0,q[10]={0};
    unsigned long long int i;
    string p;
    cin>>t;
    while(t--)
    {
     string c="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      cin>>p;
      for(i=0;i<p.length();++i)if(p[i]=='0'){++q[0]; break;}
      for(i=0;i<p.length();++i)if(p[i]=='1'){++q[1]; break;}
      for(i=0;i<p.length();++i)if(p[i]=='2'){++q[2]; break;}
      for(i=0;i<p.length();++i)if(p[i]=='3'){++q[3]; break;}
      for(i=0;i<p.length();++i)if(p[i]=='4'){++q[4]; break;}
      for(i=0;i<p.length();++i)if(p[i]=='5'){++q[5]; break;}
      for(i=0;i<p.length();++i)if(p[i]=='6'){++q[6]; ++j; if(j==2) break;} j=0;
      for(i=0;i<p.length();++i)if(p[i]=='7'){++q[7]; ++j; if(j==2) break;}j=0;
      for(i=0;i<p.length();++i)if(p[i]=='8'){++q[8]; ++j; if(j==2) break;}
      for(i=0;i<p.length();++i)if(p[i]=='9'){++q[9]; break;}
      j=5;
      for(i=0;i<5;++i){ if(j==6){ if(q[6]==2)cout<<c[i]; ++j; continue;} if(q[6]>0&&q[j]>0) cout<<c[i]; ++j; }
      for(i=0;i<10;++i){ if(i==7) { if(q[7]==2) cout<<c[i+5];continue;} if(q[7]>0&&q[i]>0)  cout<<c[i+5];}
      for(i=0;i<10;++i) {if(i==8) { if(q[8]==2)cout<<c[i+15];continue;} if(q[8]>0&&q[i]>0)  cout<<c[i+15];}
      if(q[9]>0&&q[0]>0)cout<<c[25];
      cout<<endl;
       for(i=0;i<10;++i)q[i]=0;
       j=0;
 
 
 
    }
    return 0;
} 
