// Author: Arihant Jain
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define vec vector<int>
#define vs vector<string>
#define ull unsigned long long
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define inc(x) sort(x.begin(),x.end())
#define dec(x) sort(x.rbegin(),x.rend())
#define from(i,a,b) for(int i=a;i<b; i++)
#define rfrom(i,a,b) for(int i=a;i>=b;i--)
#define imn INT_MIN
#define imx INT_MAX
#define pi 3.141592
int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;
    vec v(n);
    from(i,0,n)     cin >> v[i];
    dec(v);
    int ans = 2*v[0];
    from(i,0,n){
        from(j,0,n){
            if(v[i]-v[j] < m){
                int u = (v[i]-v[j]) % m;
                if(v[i] < v[j])     u += m;
                ans = max(ans, v[i]+v[j]+u);
            }
            else{break;}
        }
        if(2*v[i] < ans){break;}
    }
    cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin>>t;
    while(t--){solve();}
}