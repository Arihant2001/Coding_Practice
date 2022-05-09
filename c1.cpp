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
int mod = 1e9 + 7;

void solve(){
	int n;
	cin>>n;
	vec v(n);
	int c=0;
	map<int,int>mp;
	from(i,0,n){
		cin>>v[i];
		mp[v[i]]++;
	}
	int f=0;
	for(auto x:mp){
		if(x.first==0){
			cout<<n-x.second<<"\n";
			return;
		}
		if(x.second>1){
			f=1;
			break;
		}
	}
	cout<< (f==1 ? n : n+1) <<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t; cin>>t;
	while(t--){solve();}
}