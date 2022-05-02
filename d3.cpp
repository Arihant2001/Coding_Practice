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
    int n,x;
    cin>>n>>x;
    vec arr(n);
    for(int j=0;j<n;j++)    cin>>arr[j];
    sort(all(arr));
    int sum=0,res=0,cnt=n,h=0;
    for(auto j:arr)    sum += j;
    while(cnt>=1){
        if(sum<=x){
            int sub = ((x-sum)/cnt) + 1;
            h += sub;
            res += sub*cnt;
            sum += sub*cnt;
        }
        else{
            for(int j=cnt-1;j>=0;j--){
                sum -= arr[j] + h;
                if(sum<=x){
                    cnt=j;
                    break;
                }
            }
        }
    }
    cout<<res<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}