// Author: Arihant Jain
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define vec vector<int>
#define vs vector<string>
#define ull unsigned long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.rbegin(), x.rend())
#define from(i, a, b) for(int i=a; i<b; i++)
#define rfrom(i, a, b) for(int i=a; i>=b; i--)
#define imn INT_MIN
#define imx INT_MAX
#define pi 3.141592
int mod = 1e9 + 7;

void solve(){
    int n, ans=0;
    cin>>n;
    vec v(n);
    from(i,0,n)     cin>>v[i];
    from(i,0,n)     for(int j=i+1;j<n;j++)  if(v[i]>=v[j])  ans++;
    cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin>>t;
    while(t--){solve();}
}