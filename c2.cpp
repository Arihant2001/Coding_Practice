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
    // int h=0;
    // from(i,1,n){
    //     if(v[0]-v[i] > m){
    //         h = i;
    //         break;
    //     }
    // }
    // from(i,1,h){

    // }
    int fa=0;
    from(i,1,n){
        int ans1=0,ans2=0;
        int a=m+ ((v[i]-v[0])%m), a1=(v[0]-v[i])%m;
        ans1= (v[i]!=v[0] ? v[0]+v[i]+max(a,a1) : v[0]+v[i]);
        v.erase(unique(all(v)),v.end());
        if(v.size()>=2){
            int ac=m+ ((v[1]-v[0])%m), ac1=(v[0]-v[1])%m;
            ans2=v[0]+v[1]+max(ac,ac1);
        }
        else    ans2 = 2*v[0];
        fa=max(fa,max(ans1,ans2));
    }
    cout << fa<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin>>t;
    while(t--){solve();}
}