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
    int n=s.size(), o=-1, z=n, ans=0;
    for(int i=0;i<n;i++)        if(s[i]=='1')   o=i;
    for(int i=n-1;i>=0;i--)     if(s[i]=='0')   z=i;
    if(o==-1 and z==n){
        cout<<n<<"\n";
        return;
    }
    o==-1 or z==n ? o==-1 ? cout<<z+1<<"\n" : cout<<n-o<<"\n" : cout<<z-o+1<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}