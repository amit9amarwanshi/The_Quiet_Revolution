#include<bits/stdc++.h>
using namespace std;
#define LIM 1000005
int arr[LIM];
int r[LIM];
#define MOD 1000000007
pair<int, pair<int,int > > P[LIM];
int add(int a,int b)
{
	int long long x=1LL*(a+b);
	x=((x%MOD)+MOD)%MOD;
    int ret=x;
    return ret;
}
int main()
{
   int tc;
   scanf("%d",&tc);
   while(tc--)
   {
    int n,m;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<=max(n,m)+2;i++)
    {
    	arr[i]=0;
    	r[i]=0;
    }
    r[i]=0;
    for(i=1;i<=m;i++)
    {
    	scanf("%d %d %d",&P[i].first,&P[i].second.first,&P[i].second.second);
    }
    int x=m;
    int c=0;
    while(x)
    {
       c=add(c,r[x]);
       r[x]=c+1;
       if(P[x].first==2)
       {
       	r[P[x].second.first-1]=add(r[P[x].second.first-1],-r[x]);
       	r[P[x].second.second]=add(r[P[x].second.second],r[x]);
       }
       else
       {
       	arr[P[x].second.first]=add(arr[P[x].second.first],r[x]);
       	arr[P[x].second.second+1]=add(arr[P[x].second.second+1],-r[x]);
       }
       x--;
    }
    int val=0;
    for(i=1;i<=n;i++)
    {
       val=add(val,arr[i]);
       printf("%d ",val);
    }
    printf("\n");
   }
   return 0;
}
