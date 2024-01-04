#include<bits/stdc++.h>
using namespace std;
        
#define ll long long
#define ld long double
#define start ios::sync_with_stdio(0);cin.tie(0);  
#define stp fixed<<setprecision 
#define eb emplace_back 
#define pb push_back
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
const int mx=2e9;
const int md=998244353;
int dx[8] = {1,0,-1,0,-1,1,-1,1};
int dy[8] = {0,1,0,-1,-1,1,1,-1};


//Double number of printers until you can't craft all statues in one day

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }  
    int md=1;
    for(int i=1;i<=n;i++){
        if(md>=n){
            cout<<i;
            return;
        }
        md*=2;
    }
}
int main(){
    solve();
}
