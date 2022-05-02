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
    vector<vector<int>>intervals;
    for(int i=0;i<a;i++){
        vec v(2,0);
        for(int i=0;i<2;i++){
            cin>>v[i];
        }
        intervals.push_back(v);
    }
    sort(intervals.begin(), intervals.end());
    for(int i=0;i<intervals.size()-1;i++){
        if(intervals[i][1]>=intervals[i+1][1])  intervals.erase(intervals.begin() +1 +i--);
        else{
            if(intervals[i][0]==intervals[i+1][0])  intervals.erase(intervals.begin() + i--);
        }
    }
    // reverse(intervals.begin(), intervals.end());
    // for(int i=0;i<intervals.size()-1;i++){
    //     if(intervals[i][1]<=intervals[i+1][1])  intervals.erase(intervals.begin() +i);
    // }
    for(int i=0;i<intervals.size();i++){
        for(int j=0;j<2;j++){
            cout<<intervals[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}