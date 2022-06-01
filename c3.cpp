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
    int n,k;
    string s;
    cin>>n>>k>>s;
    vec c;
    int f=0, b=0, fl=0;
    fo(i,0,n)       if(s[i]=='1'){f=i;break;}
    fo(i,n-1,0)     if(s[i]=='1'){b=i;break;}
    if(b==f and b!=n-1){
        if(n-1-b<=k)    swap(s[b],s[n-1]), fl = 1;
        else if(fl==0 and b<=k)   swap(s[0],s[b]);
    }
    else{
        if(n-1-b<=k)    swap(s[b],s[n-1]), k-=n-b-1;
        if(b!=f and f<=k)   swap(s[f],s[0]);
    }
    int ans=0;
    fo(i,0,n-1)     ans+= stoi(s.substr(i,2));
    cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin>>t;
    while(t--){solve();}
}