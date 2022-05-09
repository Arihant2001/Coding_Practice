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
	from(i,0,n)		cin>>v[i];
	int i=0,j=n-1,s1=v[0],s2=v.back(),ans=0;
	while(i<j){
		if(s1==s2)	ans = i+1+n-j;
		s1<=s2 ? s1 += v[++i] : s2 += v[--j];
	}
	cout<< ans <<"\n";
}

int32_t main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t; cin>>t;
	while(t--){solve();}
}