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


//Be careful-positive array can be empty
//https://codeforces.com/problemset/problem/300/A

void solve(){
    int n,l;
    cin>>n;
    vector<int>zr,ps,ng;
    while(n--){
        cin>>l;
        if(l>0)ps.pb(l);
        if(l<0)ng.pb(l);
        if(l==0)zr.pb(l);
    }

    if(ps.empty()){
        for(int i=0;i<2;i++){
            ps.pb(ng.back());
            ng.pop_back();
        }
    }
    if(ng.size()%2==0){
        zr.pb(ng.back());
        ng.pop_back();
    }

    cout<<ng.size()<<" ";
    for(auto &i:ng)cout<<i<<" ";
    cout<<"\n";
    cout<<ps.size()<<" ";
    for(auto &i:ps)cout<<i<<" ";
    cout<<"\n";
    cout<<zr.size()<<" ";
    for(auto &i:zr)cout<<i<<" ";
}
int main(){
    solve();
}
