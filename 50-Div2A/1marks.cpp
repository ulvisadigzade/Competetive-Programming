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

//Do what problem says
//https://codeforces.com/contest/152/problem/A

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>v(n);
    for(auto &i:v)cin>>i;

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int mx=0;
            for(int t=0;t<n;t++){
                if(t!=i){
                    mx=max(mx,v[t][j]-'0');
                }
            }
            if(v[i][j]-'0'>=mx){
                ans++;
                break;
            }
        }
    }
    cout<<ans;
}
int main(){
    solve();
}
