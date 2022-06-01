// Author: Arihant Jain
#include<bits/stdc++.h>
using namespace std;
template<typename T> istream& operator>>(istream& is, vector<T> &v){for(auto& i:v) is >> i;        return is;}
template<typename T> ostream& operator<<(ostream& os, vector<T>  v){for(auto& i:v) os << i << ' '; return os;}
#define fo(i,a,b) for(int i=a; a<b ? i<b : i>=b; a<b ? i++ : i--)
#define ff first
#define rr return
#define ss second
#define pi 3.141592
#define imn INT_MIN
#define imx INT_MAX
#define pb push_back
#define int long long
#define mkp make_pair
#define vv vector<vec>
#define mod 1000000007
#define vec vector<int>
#define mint map<int,int>
#define vs vector<string>
#define inc(x) sort(all(x))
#define dec(x) sort(rall(x))
#define ull unsigned long long
#define all(x) x.begin(),x.end()
#define vp vector<pair<int,int>>
#define rall(x) x.rbegin(),x.rend()
#define mine(x) *min_element(all(x))
#define maxe(x) *max_element(all(x))
#define mini(x) min_element(all(x))-x.begin()
#define maxi(x) max_element(all(x))-x.begin()
#define ecd(x) x.erase(unique(all(x)),x.end())
#define lb(x,y) lower_bound(all(x),y)-x.begin()
#define ub(x,y) upper_bound(all(x),y)-x.begin()

void solve(){
    int n;
    cin>>n;
    vec v(n),h;
    map<int,vec>mp;
    fo(i,0,n)   cin>>v[i], mp[v[i]].pb(i+1);
    for(auto i:mp){
        if(i.ss.size()==1){cout<<"-1\n";rr;}
        reverse(1 + all(i.ss));
        h.insert(h.end(), rall(i.ss));
    }
    cout<<h<<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin>>t;
    while(t--){solve();}
}