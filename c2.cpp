//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;

void solve(){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    x>=a ? x-=a : x=0;
    y>=b ? y-=b : y=0;
    c>=x+y ? cout<<"YES\n" : cout<<"NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}