#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct Point
{
    ll x;
    ll y;
};
bool isInside(Point poly[],ll pointx,ll pointy,ll n) {
    int i, j;
    int inside = false;
    for (i = 0, j= n-1; i < n; j = i++) {
        if(((poly[i].y > pointy) != (poly[j].y > pointy)) && (pointx < (poly[j].x-poly[i].x) * (pointy-poly[i].y) / (poly[j].y-poly[i].y) + poly[i].x) )inside = !inside;
    }
    return inside;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n,i;
    cin>>t;
    while(t--){
	cin>>n;
	Point poly[n];
	set<ll> s;
	set<ll> s1;
	for(i=0;i<n;i++){
	    cin>>poly[i].x>>poly[i].y;
	    s.insert(poly[i].x);s1.insert(poly[i].y);
	    
	}double area = 0.0;
	ll j = n - 1,k,flag=0;
    for (i = 0; i < n; i++)
    {
        area += (poly[j].x + poly[i].x) * (poly[j].y- poly[i].y);
        j = i;
    }
    area=abs(area/2.0);
	if(area>(double)(n/2-1)){
	    if(n<=100){
	       ll l=0;
	    Point p;
	    ll p1=poly[0].x,p2=poly[0].y;
	        for(j=1;j<n-1;j++){
	            for(k=n-1;k>=0;k--){
	                if((n/2)!=j&&j!=k){
	                    p.x=(poly[n/2].x+poly[j].x+poly[k].x)/3;
	                    p.y=(poly[n/2].y+poly[j].y+poly[k].y)/3;
	                  if(l==floor(n/10)) {flag=1;break;}
	                  if(isInside(poly,p.x,p.y,n)) { cout<<p.x<<" "<<p.y<<"\n";l++;}
	                }
	            }
	            if(flag==1) break;
	        }
	}
	    else{
	    ll l=0;
	    Point p;
	    ll p1=poly[0].x,p2=poly[0].y;
	        for(j=1;j<n-1;j++){
	            for(k=n-1;k>=0;k--){
	                if((n/2)!=j&&j!=k){
	                    p.x=(poly[n/2].x+poly[j].x+poly[k].x)/3;
	                    p.y=(poly[n/2].y+poly[j].y+poly[k].y)/3;
	                  if(l==floor(n/10)) {flag=1;break;}
	                  cout<<p.x<<" "<<p.y<<"\n";l++;
	                }
	            }
	            if(flag==1) break;
	        }
	}
	}
	else{
	   cout<<"-1\n";
    }
}
	return 0;
} 
