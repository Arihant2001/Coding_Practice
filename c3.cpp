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
    int n;
    cin>>n;
    vec v(n);
    double sum=0.0;
    for(int i=0;i<n;i++)    cin>>v[i];
    if(n==1){
        cout<<v[0]<<"\n";
        return;
    }
    sort(all(v));
    for(int i=0;i<n-1;i++)  sum+=v[i];
    cout<<setprecision(6)<<double((double(sum)/(n-1))+v.back())/2<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}