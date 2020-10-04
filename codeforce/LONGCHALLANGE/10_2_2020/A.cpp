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
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    bool state[n]={false};
    state[x-1]=true;  
    int curr = (x-1+k)%n;
    while(!state[curr]){
      state[curr]=true;
      curr=(curr+k)%n;
    }
    state[y-1]?(cout<<"YES"<<endl):(cout<<"NO"<<endl);
  }
  return 0; 
} 
