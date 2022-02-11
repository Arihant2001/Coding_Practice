//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;
bool isp(string s){
    int n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])  return false;
    }
    return true;
}
void solve(){
    int a,k;
    string s;
    cin>>a>>k>>s;
    if(isp(s) or k==0)  cout<<"1\n";
    else    cout<<"2\n";
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}