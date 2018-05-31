#include <iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    unsigned int i,j,k,l,m,count=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='h')
        {
            for(j=i+1;j<s.length();j++)
            {
                if(s[j]=='e')
                {
                    for(k=j+1;k<s.length();k++)
                    {
                        if(s[k]=='l')
                        {
                            for(l=k+1;l<s.length();l++)
                            {
                                if(s[l]=='l')
                                {
                                    for(m=l+1;m<s.length();m++)
                                    {
                                        if(s[m]=='o')
                                        {
                                            count++;
                                            goto x;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    x:
    if(count!=1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
