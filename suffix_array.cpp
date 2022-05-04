//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;

int32_t main(){
    string s;
    cin>>s;
    vector<pair<string,int>>v(1,{"",s.size()});
    for(int i=s.size()-1;i>=0;i--)  v.pb({s.substr(i,s.size()-i),i});
    sort(all(v));
    for(auto i:v)   cout<<i.second<<" ";
}