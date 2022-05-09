// Author: Arihant Jain
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long
#define vec vector<int>
#define vs vector<string>
#define ull unsigned long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.rbegin(), x.rend())
#define from(i, a, b) for(int i=a; i<b; i++)
#define rfrom(i, a, b) for(int i=a; i>=b; i--)
#define imn INT_MIN
#define imx INT_MAX
#define pi 3.141592
#define endl "\n"
int mod = 1e9 + 7;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    int c=0;
    vec v;
    from(i,0,n-1)   s[i]==s[i+1] ? c++ : (v.pb(c+1), c=0);
    v.pb(c+1);
    int jv=0, j=0, flag=0, ans=0;
    from(i,0,v.size()){
        if(v[i]%2==1){
            if(flag==0)     jv = v[i], j = i, flag = 1;
            else    ans += i-j, j = 0, jv = 0, flag = 0;
        }
    }
    cout<<ans<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}