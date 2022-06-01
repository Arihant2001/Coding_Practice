#include "bits/stdc++.h"
using namespace std;
#define int long long
#define INF 1e15
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
const int mod = 1e9 + 7;
// dont use accumulate or ceil ------------NEVER----------
// take modulo and into account negative numbers:- (a%b + b)%b   like this
int32_t main()
{
    //#ifndef ONLINE_JUDGE
    //	freopen("input.txt","r", stdin);
    //	freopen("output.txt","w",stdout);
    //#endif
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1 or n == 2){
            cout<<-1<<"\n";
        }else{
            if(n%4==0 and n%6==0){
                cout<<n/6<<" "<<n/4<<"\n";
            }else if(n%4==0){
                if((n-4)%6==0)
                    cout<< (n-4)/6 + 1 <<" "<<n/4<<"\n";
                else{
                    cout<<(n - 8)/6 + 2<<" "<<n/4<<"\n";
                }
            }else if(n%6==0){
                cout<<n/6<<" "<<(n-6)/4 + 1<<"\n";
            }else{
                if((n-4)%6==0)
                    cout<<(n-4)/6+1<<" "<<(n-6)/4+1<<"\n";
                else{
                    cout<<(n-8)/6 + 2<<" "<<(n-6)/4 + 1<<"\n";
                }
            }
        }
    }
}