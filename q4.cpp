// Author: Arihant Jain
#include<bits/stdc++.h>
using namespace std;
#define pi 3.141592
#define imn INT_MIN
#define imx INT_MAX
#define pb push_back
#define int long long
#define vec vector<int>
#define mint map<int,int>
#define vs vector<string>
#define vv vector<vector<int>>
#define ull unsigned long long
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define inc(x) sort(x.begin(),x.end())
#define dec(x) sort(x.rbegin(),x.rend())
#define from(i,a,b) for(int i=a;i<b;i++)
#define rfrom(i,a,b) for(int i=a;i>=b;i--)
#define ecd(x) x.erase(unique(all(x)),x.end())
#define lb(x,v) lower_bound(all(v),x)-v.begin()
#define ub(x,v) upper_bound(all(v),x)-v.begin()
int mod = 1e9 + 7;

bool isp(string S){
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return 0;
        }
    }
    // Return "Yes"
    return 1;
}

int nps(string s){
    int ans=0, n=s.size(), tot = (n*(n+1))/2;
    if(s.size()<=2)     return 0;
    if(s.size()==3){
        set<char>f(all(s));
        if(f.size()==1)     return 0;
        else if(f.size()==2){
            return s[0]==s[2] ? 2 : 1;
        }
        else    return 2;
    }
    for(int j=1;j<s.size()-1;j++){
        if(s[0]==s[j] and isp(s.substr(0,j+1)))  ans++;
    }
    ans += nps(s.substr(1,s.size()-1));
    return tot-ans-1;
}

int32_t main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
        int n;
        string s;
        cin>>n>>s;
        int q = nps(s);
        cout<<"Case #"<<i+1<<": "<<q<<"\n";
	}
}