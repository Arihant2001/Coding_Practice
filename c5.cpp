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
    int num;
    cin>>num;
    vec v(num);
    int ans,ad=0;
    for(int i=0;i<num;i++)    cin>>v[i];
    for(int i=0;i<num;i++){
        cin >> ans;
        v[i] -= ans;
        ad += v[i];
    }
    if(ad<0){ cout<<"-1\n"; return; }
    ad=0;
    int it=0,k=0,z=0;
    while(z==0 or it<num){
        if(ad<0)    ad=0, z=0, k=it;
        if(z==0)    z=1;
        ad += v[it++];
    }
    cout<<k<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}