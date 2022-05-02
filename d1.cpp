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
    string s;
    cin>>s;
    int cnt=0, cnt1=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            cnt++;
            if(cnt1==1){
                cout<<"NO\n";
                return;
            }
            cnt1 = 0;
        }
        else{
            cnt1++;
            if(cnt==1){
                cout<<"NO\n";
                return;
            }
            cnt = 0;
        }
    }
    cnt==1 or cnt1==1 ? cout<<"NO\n" : cout<<"YES\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}