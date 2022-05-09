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
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    vec v;
    from(i,0,n-1){
        if(s[i]==s[i+1])    c++;
        else{
            v.pb(c+1);
            c=0;
        }
    }
    v.pb(c+1);
    int jv=0, j=0, flag=0, ans=0;
    from(i,0,v.size()){
        if(v[i]%2==1){
            if(flag==0){
                jv=v[i];
                j=i;
                flag=1;
            }
            else{
                ans+=i-j;
                j=0, jv=0, flag=0;
            }
        }
    }
    if(ans==0){
        cout<<"0 "<<v.size()<<"\n";
    }
    else{
        int q=ans;
        vector<pair<int,int>>arr;
        int o=0, z=0;
        from(i,0,v.size()){
            if(s[0]=='0'){
                i%2==0 ? (z+=v[i], arr.pb({0,v[i]})) : (o+=v[i], arr.pb({1,v[i]}));
            }
            else{
                i%2==0 ? (o+=v[i], arr.pb({1,v[i]})) : (z+=v[i], arr.pb({0,v[i]}));
            }
        }
        int cnt=0;
        if(z>o){
            from(i,1,arr.size()-1){
                if(arr[i].first==1 and arr[i].second<=q and q>0){
                    arr[i].first=0;
                    q=-arr[i].second;
                }
            }
        }
        else{
            from(i,1,arr.size()-1){
                if(arr[i].first==0 and arr[i].second<=q and q>0){
                    arr[i].first=1;
                    q=-arr[i].second;
                    cout<<q<<" ";
                }
            }
        }
        from(i,0,arr.size()-1){
            if(arr[i].first!=arr[i+1].first)    cnt++;
        }
        if(q==1 and (arr[0].second==1 or arr[arr.size()-1].second==1))     cnt--;
        
        from(i,0,arr.size())    cout<<arr[i].first<<" ";
        cout<<"\n";
        from(i,0,arr.size())    cout<<arr[i].second<<" ";
        cout<<"\n";
        cout<<ans<<" "<<cnt+1<<" "<<q<<"\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}