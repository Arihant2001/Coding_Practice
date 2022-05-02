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
	vec v(n),arr;
	for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==3)     v[i]=1;
    }
    if(n<4){
        cout<<"YES\n";
        return;
    }
    for(int i=0;i<n-3;i++){
        if(v[i]==0 and v[i+1]==1 and v[i+2]==2 and v[i+3]==1){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}