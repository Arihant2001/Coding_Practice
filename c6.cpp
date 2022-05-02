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
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)    for(int j=0;j<m;j++)    cin>>arr[i][j];

    for(int j=0;j<m;j++){
        int k=-1, cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i][j]=='o' or i==n-1){
                for(int l = i-1; l > k; l--){
                    cnt>0 ? arr[l][j] = '*', cnt-- : arr[l][j] = '.';
                }
                k = i;
            }
            else if(arr[i][j]=='.' and i==n-1){
                for(int l = i; l > k; l--){
                    cnt>0 ? arr[l][j] = '*', cnt-- : arr[l][j] = '.';
                }
            }
            else if(arr[i][j]=='*')  cnt++;
        }
    }

    // for(int j=0;j<m;j++){
    //     int cnt = 0, k = -1;
    //     for(int i=0;i<n;i++){
    //         if(arr[i][j]=='.' and i==n-1){
    //             for(int l = i; l > k; l--){
    //                 cnt>0 ? arr[l][j] = '*', cnt-- : arr[l][j] = '.';
    //             }
    //         }
    //         else if(arr[i][j]=='o' or i==n-1){
    //             for(int l = i-1; l > k; l--){
    //                 cnt>0 ? arr[l][j] = '*', cnt-- : arr[l][j] = '.';
    //             }
    //             k = i;
    //         }
    //         else if(arr[i][j]=='*')     cnt++;
    //     }
    // }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)    cout<<arr[i][j];
        cout<<"\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){solve();}
}