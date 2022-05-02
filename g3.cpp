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
    int x;
    cin>>x;
    vector<int>bin;
    for(int k=log(x)+1;k>=0;k--)  x&(1<<k) ? bin.pb(1) : bin.pb(0);
    for(auto i:bin)     cout<<i;
    cout<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}