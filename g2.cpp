//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;

int func(map<pair<int,int>,int>& hlt,vec arr,int a, int i, int j){
    if(i==j){
        return arr[i]>=a ? 1 : 0;
    }
    if(hlt.count({i,j})){
        return hlt[{i,j}];
    }
    arr[i]>=a ? hlt[{i,j}]=1+func(hlt,arr,arr[i],i+1,j) : hlt[{i,j}]=func(hlt,arr,a,i+1,j);
    arr[j]>=a ? hlt[{i,j}]=max(1+func(hlt,arr,arr[j],i,j-1),hlt[{i,j}]) : hlt[{i,j}]=max(func(hlt,arr,a,i,j-1),hlt[{i,j}]);
    return hlt[{i,j}];
}

void solve(int h){
    vec arr;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a, arr.pb(a);
    map<pair<int,int>,int> hlt;
    if(n==1)    cout<<"Case #"<<h<<": "<<1<<"\n";
    hlt[{0,n-1}]=max(1+func(hlt,arr,arr[0],1,n-1),1+func(hlt,arr,arr[n-1],0,n-2));
    cout<<"Case #"<<h<<": "<<hlt[{0,n-1}]<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){ solve(i+1); }
    return 0;
}