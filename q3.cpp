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
vec ans;
vec tra(vv v){
    sort(all(v));
    while(v.size()!=0){
        from(k,0,v.size()-1){
            if(v[0][1]==-1 or v[0][0]==0){
                ans.pb(v[0][2]), v.erase(v.begin());
                continue;
            }
            if(v.back()[1]==1 or v.back()[0]==l-1)  ans.pb(v[0][2]), v.erase(v.end());
            if(v[k][0]+v[k][1]>=v[k+1][0]+v[k][1]){
                v[k][0] += v[k][1];
                v[k+1][0] += v[k+1][1];
                swap(v[k],v[k+1]);
            }
        }
    }
}

int32_t main(){
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
        int n,l;
        cin>>n>>l;
        vv v;
        int p,d;
        from(j,0,n){
            cin>>p>>d;
            d==0 ? v.pb({p,-1,j}) : v.pb({p,1,j});
        }
        from(k,0,v.size()-1){
            if(v[0][1]==-1 and ){
                ans.pb(v[0][2]), v.erase(v.begin());
                continue;
            }
            if(v.back()[1]==1 or v.back()[0]==l-1)  ans.pb(v[0][2]), v.erase(v.end());
            if(v[k][0]+v[k][1]>=v[k+1][0]+v[k][1]){
                v[k][0] += v[k][1];
                v[k+1][0] += v[k+1][1];
                swap(v[k],v[k+1]);
            }
        }
        cout<<"Case #"<<i+1<<": IMPOSSIBLE\n";
	}
}