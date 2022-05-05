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
    vec v(n);
    int ans=0;
    for(int i=0;i<n;i++)    cin>>v[i];
	if(n==1)	ans=0;
	else if(v[n-1]==0)	ans=-1;
	else{
		for(int i=n-2;i>=0;i--){
			if(v[i]==0 and i!=0){
				cout<<"-1\n";
				return;
			}
			else{
				if(v[i]>=v[i+1]){
					v[i]/=2;
					ans++;
					i++;
				}
				else
				{
					continue;
				}
				
			}
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