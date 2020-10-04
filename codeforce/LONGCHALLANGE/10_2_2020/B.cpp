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
    int n,k;cin>>n>>k;
    int q[n+1]={0};
    for(int i=0;i<n;++i)
      cin>>q[i];
    int day=0;
    for(int i=0;i<n;i++){
      if(q[i]>=k){
        q[i+1]+=q[i]-k;
      }
      else{
        day=i+1;
        break;
      }
    }

    if(day==0){
      day=n+(q[n]/k)+1;
    }
    cout<<day<<endl; 
   }
  return 0; 
} 
