#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t,n,k;
    cin>>t;
    string s;
    for(int g=0;g<t;g++){
        cin>>n>>s>>k;
        char arr[k];
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        set<char>set;
        for(int i=0;i<k;i++){
            set.insert(arr[i]);
        }
        int ans=0;
        string t="";
       
        while(true){
            int d=s.size();
            for(int i=1;i<s.size();i++){
                if(!set.count(s[i])){
                    t+=s[i-1];
                }
            }
            t+=s[d-1];
            s=t;
            t="";
            if(s.size()==d){
                break;
            }
            else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}