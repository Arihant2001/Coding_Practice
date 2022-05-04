//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;
bool primeFactors(int n)
{
    int c=2;
	int sum=0;
	map<int,int> mp;
    while(n>1)
    {
        if(n%c==0){
			mp[c]++;
        n/=c;
        }
        else c++;
    }
	for(auto i : mp){
		sum+=i.first + i.second;
	}
	return (sum&1) ? 0 : 1;
}
void solve(){
    int n, ans=0;
    cin>>n;
    vec v(n),h;
    for(int i=0;i<n;i++)    cin>>v[i];
    h=v;
    sort(all(h));
    if(h[0]==v[0] and (h[n-1]==v[n-1] or (h[n-1]==v[n-2] and h[n-2]==v[n-1])))   ans=1;
    if(n%2==0){
        if(h[0]==v[1] and h[1]==v[0] and h[n-1]==v[n-1])   ans=1;
        else if(h[0]==v[1] and h[1]==v[0] and h[n-1]==v[n-2] and h[n-2]==v[n-1])   ans=1;
    }
    ans==1 ? cout<<"YES\n" : cout<<"NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}