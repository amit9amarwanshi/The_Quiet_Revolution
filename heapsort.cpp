#include<bits/stdc++.h>
using namespace std;

void heapify(int a[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&a[l]>a[largest]) largest=l;
    if(r<n&&a[largest]<a[r]) largest=r;
    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n){
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);
    for(int i=n-1;i>=0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main(){
       ios::sync_with_stdio(0);
       cin.tie(nullptr);
       int t,i,n;
       cin>>t;
       while(t--){
           cin>>n;
           int a[n];
           for(i=0;i<n;i++) cin>>a[i];
           heapsort(a,n);
           for(i=0;i<n;i++) cout<<a[i]<<" ";
       }
    return 0;
}
