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
	int n,m;
	cin>>n>>m;
	vec v(n);
	int mn=INT_MIN, sum=0;
	for(int i=0;i<n;i++)	cin>>v[i], mn=max(mn,v[i]), sum+=ceil(float(v[i])/m);
	cout<<min(mn,sum)<<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t;
	cin>>t;
	while(t--){solve();}
}