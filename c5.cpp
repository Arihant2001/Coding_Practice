// Author: Arihant Jain
#include<bits/stdc++.h>
using namespace std;
template<typename T> istream& operator>>(istream& is, vector<T> &v){for(auto& i:v) is >> i;        return is;}
template<typename T> ostream& operator<<(ostream& os, vector<T>  v){for(auto& i:v) os << i << ' '; return os;}
#define fo(i,a,b) for(int i=a; a<b ? i<b : i>=b; a<b ? i++ : i--)
#define ff first
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
    int a,b,c,d;
    string s;
    cin>>a>>b>>c>>d>>s;
    if(s.size()>1 and d>0){
        fo(i,0,s.size()-1){
            if(s[i]=='B' and s[i+1]=='A'){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                d--;
                if(i!=0)    i--;
            }
            if(d==0){break;}
        }
        if(d!=0){
            cout<<"NO\n";
            return;
        }
    }
    if(s.size()>1 and c>0){
        fo(i,0,s.size()-1){
            if(s[i]=='A' and s[i+1]=='B'){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                c--;
                if(i!=0)    i--;
            }
            if(c==0){break;}
        }
        if(c!=0){
            cout<<"NO\n";
            return;
        }
    }
    if(s.size()>0 and b>0){
        fo(i,0,s.size()){
            if(s[i]=='B'){
                s.erase(s.begin()+i);
                b--;
                if(i!=0)    i--;
            }
            if(b==0){break;}
        }
        if(b!=0){
            cout<<"NO\n";
            return;
        }
    }
    if(s.size()>0 and a>0){
        fo(i,0,s.size()){
            if(s[i]=='A'){
                s.erase(s.begin()+i);
                a--;
                if(i!=0)    i--;
            }
            if(a==0){break;}
        }
        if(a!=0){
            cout<<"NO\n";
            return;
        }
    }
    cout<< (s.size()==0 and max({a,b,c,d})==0 ? "YES\n" : "NO\n");
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t; cin>>t;
    while(t--){solve();}
}