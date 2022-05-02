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
    ios_base::sync_with_stdio(0),cin.tie(0);
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;
        cin>>n;
        vec arr(n);
        for(int j=0;j<n;j++)    cin>>arr[i];
        int ans=0, m=INT_MIN;
        set<int>s;
        int h=0;
        for(int j=0;j<arr.size();j++){
            if(arr[0]>=m or arr.back()>=m){
                if(arr[0]>=m and arr.back()>=m){
                    if(arr[0]<=arr.back()){
                        h=arr[0];
                        arr.erase(arr.begin());
                        ans++;
                    }
                    else{
                        h=arr.back();
                        arr.pop_back();
                        ans++;
                    }
                    m=max(m,h);
                }
                else{
                    if(arr[0]>m){
                        h=arr[0];
                        arr.erase(arr.begin());
                        ans++;
                    }
                    else if(arr.back()>m){
                        h=arr.back();
                        arr.pop_back();
                        ans++;
                    }
                    m=max(m,h);
                }
            }
        }
        // if(arr[0]>=m)     ans++;
        cout<<"Case #"<<i+1<<": "<<ans<<"\n";
    }
    return 0;
}