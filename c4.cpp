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
    int n, c=0;
    cin>>n;
    if(n%2==1){
        cout<<"1\n";
        return;
    }
    primeFactors(n)==true ? cout<<"2\n" : cout<<"-1\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}