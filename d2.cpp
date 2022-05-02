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
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    arr[n-1]-arr[0]-1 <= n ? cout<<"YES\n" : cout<<"NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}