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
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    int f=0;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
        if(arr[i]>arr[i+1]){
            if(f>0){ f=2; break; }
            swap(arr[i],arr[i+1]);
            i--;
            f=1;
        }
    }
    f==2 ? cout<<"NO\n" : cout<<"YES\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}