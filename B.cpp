#include<bits/stdc++.h>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  int t;cin>>t;
  while(t--){
    int n,T;cin>>n>>T;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    bool alter=false;
    while(i<j){
      if(a[i]+a[j]==T)
      {
        bool alter = false;
        while(i<j && a[i+1]==a[i]){
          if(a[i]==a[j] && alter){
            b[i]=1;b[j]=0;
            alter = false;
          }
          else{
            b[i]=0;b[j]=1;
            alter=true;
          }
          i++;
        }
        while(i<j && a[j]==a[j-1]){
          if(a[i]==a[j] && alter){
            b[i]=1;b[j]=0;
            alter = false;
          }
          else{
            b[i]=0;b[j]=1;
            alter=true;
          }
          j--;
        }
      }
    }
    for(auto x:b)
      cout<<x<<" ";
    cout<<"\n";

  }
return 0; 
} 
