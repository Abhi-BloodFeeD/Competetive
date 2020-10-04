#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mod = 1e9+7;
const int mxN = 1e6;
const int N = 2e5;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;cin>>t;
  while(t--){
    int n,x,p,k;cin>>n>>x>>p>>k;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);p--,k--;
    if(a[p]==x)cout<<0<<endl;
    else if(a[p]>x && k>=p){
      int lx_l=upper_bound(a,a+n,x)-a;
      if(a[lx_l]>x)lx_l--;
      cout<<abs(p-lx_l)<<endl;
    }
    else if(a[p]<x && k<=p){
      int lx_h=lower_bound(a,a+n,x)-a;
      cout<<abs(p-lx_h)<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
  }
  return 0; 
} 
