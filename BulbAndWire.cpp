#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define w(t) int t;cin>>t;while(t--)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int mpow(int base, int exp); 

const int mod = 1000000007;
const int N = 2e5;
//=======================

//vi gv[N];
//int av[N];

int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  //
  //---code from here---
  //for T test case uncoment this line
  w(t){ 
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vpii v;int score=0;
    int i=0,j=n-1;
    while(s[i]=='0'){
      score++;
    }
    v.pb(mp(score,1));score=0;
    while(s[j]=='0')
      score++;
    v.pb(mp(score,1));score=0;
    while(i<j){
      if(s[i]!='1')
        score++;
      v.pb(mp(score,2));
      if(s[i]=='1')
        score=0;
      i++;
      }
    for(auto x:v)deb2(x.F,x.S);
    }
    return 0; 
}

