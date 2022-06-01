#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int n;
    cin>>n;
    vector<string>v(1, "0");
    v.push_back("1");
    while(v.size()!= 1<<n){
        int h=v.size();
        for(int i=0;i<h;i++){
            string t = v[i] + "1";
            v[i] += "0";
            v.push_back(t);
        }
    }
    for(auto i:v)   cout<<i<<" ";
}