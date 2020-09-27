#include<bits/stdc++.h>
using namespace std;

#define ll long long
//#define ar array

const int mod = 1e9+7;
//const int mxN = 1e6;
////const int N = 2e5;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  
  int t;cin>>t;
  {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    int min=a[0];
    int score=0;
    cout<<score<<endl;
  }
  return 0; 
} 
