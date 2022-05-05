//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;
vector<string> ope(string s, int k){
    string m;
    vector<pair<string,char>>v;
    for(int i=0;i<s.size();i++){
        if(s[i]-'a'<=k)     m = max(m,s[i]), s[i] = 'a';
    }
    return {s,m};
}
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    while(k>1){
        vector<string>v = ope(s,k);
        s = v[0];
        k -= v[1][0]-'a';
    }
    cout<<s<<"\n";
    // cout<<s[0]-'a'+1<<"\n";
    // if(k==s[0]-'a'){
    //     for(int i=0;i<n;i++)    if(s[i]<=s[0])  s[i]-=s[0]-'a';
    // }
    // else if(k>s[0]-'a'){
    //     for(int i=0;i<n;i++){
    //         if(s[i]-'a'<=k){
    //             s[i]='a';
    //         }
    //     }
    // }
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}